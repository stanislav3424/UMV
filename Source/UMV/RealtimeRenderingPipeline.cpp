#include "RealtimeRenderingPipeline.h"
#include "ItemBase.h"
#include "RepresentedActorBase.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SpotLightComponent.h"
#include "MainController.h"

ARealtimeRenderingPipeline::ARealtimeRenderingPipeline()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickInterval = 0.1f;
    InitializeeComponents();
}

void ARealtimeRenderingPipeline::BeginPlay()
{
    Super::BeginPlay();

    MainController = Cast<AMainController>(GetWorld()->GetFirstPlayerController());
    if (MainController)
    {
        SizeCell = MainController->GetSizeCell(); 
    }
    else
        Destroy();
}

void ARealtimeRenderingPipeline::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    while (!RenderQueue.IsEmpty() && RenderTexture())
        ;
    CheckWaitingMIDs();
    int32 Size = MapTextures.Num();
    bool IsEmpty = RenderQueue.IsEmpty();
}

void ARealtimeRenderingPipeline::InitializeeComponents()
{
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    SceneCapture->SetupAttachment(RootComponent);
    SceneCapture->ProjectionType = ECameraProjectionMode::Orthographic;
    SceneCapture->OrthoWidth = SizeCell;
    SceneCapture->bCaptureEveryFrame = false;
    SceneCapture->bCaptureOnMovement = false;
    SceneCapture->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList;

    SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
    SpotLight->SetupAttachment(RootComponent);
    SpotLight->LightingChannels.bChannel0 = false;
    SpotLight->LightingChannels.bChannel1 = true;
    SpotLight->LightingChannels.bChannel2 = false;
}

UMaterialInstanceDynamic* ARealtimeRenderingPipeline::GetMID(UItemBase* ItemBase, FIntPoint Size)
{
    if (!ItemBase || !MaterialBase)
        return nullptr;

    FVector2D Normalized = NormalizeSize(Size);
    int32 ID = GetID(ItemBase);

    UTextureRenderTarget2D* Texture = MapTextures.FindRef(ID);

    UMaterialInstanceDynamic* MID = UMaterialInstanceDynamic::Create(MaterialBase, ItemBase);
    if (!MID)
        return nullptr;

    MID->SetScalarParameterValue(FName("SizeX"), Normalized.X);
    MID->SetScalarParameterValue(FName("SizeY"), Normalized.Y);

    if (Texture)
        MID->SetTextureParameterValue(FName("Texture"), Texture);
    else
    {
        MID->SetScalarParameterValue(FName("Waiting"), 1.f);
        RenderQueue.Enqueue(ItemBase);
    }
    WaitingMIDs.Add(ID, MID);
    return MID;
}

int32 ARealtimeRenderingPipeline::GetID(UItemBase* ItemBase)
{
    if (!ItemBase || !ItemBase->GetRepresentedClass())
        return INDEX_NONE;

    TSubclassOf<ARepresentedActorBase> RepresentedClass = ItemBase->GetRepresentedClass();

    FString ClassName = RepresentedClass->GetName();
    return GetTypeHash(ClassName);
}

bool ARealtimeRenderingPipeline::RenderTexture()
{
    UItemBase* ItemBase;
    RenderQueue.Dequeue(ItemBase);
    if (!ItemBase)
        return false;

    if (MapTextures.Contains(GetID(ItemBase)))
        return false;

    UTextureRenderTarget2D* Texture = NewObject<UTextureRenderTarget2D>(this);
    Texture->InitAutoFormat(256, 256);

    if (!Texture)
        return false;

    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    FTransform SpawnTransform = GetActorTransform();
    auto SpawnClass = ItemBase->GetRepresentedClass();
    if (!SpawnClass)
        return false;
    RenderActor = GetWorld()->SpawnActor<ARepresentedActorBase>(SpawnClass, SpawnTransform, SpawnParameters);

    if (!RenderActor)
        return false;

    for (UActorComponent* Component : RenderActor->GetComponents())
    {
        if (UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Component))
        {
            PrimComp->SetLightingChannels(false, true, false);
        }
    }

    SceneCapture->ShowOnlyActors.Empty();
    SceneCapture->ShowOnlyActors.Add(RenderActor);

    SceneCapture->TextureTarget = Texture;
    SceneCapture->CaptureScene();

    MapTextures.Add(GetID(ItemBase), Texture);

    RenderActor->Destroy();
    return true;
}

void ARealtimeRenderingPipeline::CheckWaitingMIDs()
{
    TArray<int32> KeysToUpdate;
    WaitingMIDs.GetKeys(KeysToUpdate);

    for (int32 ID : KeysToUpdate)
    {
        if (UTextureRenderTarget2D** TexturePtr = MapTextures.Find(ID))
        {
            TArray<UMaterialInstanceDynamic*> MIDs;
            WaitingMIDs.MultiFind(ID, MIDs);

            for (UMaterialInstanceDynamic* MID : MIDs)
            {
                if (MID)
                {
                    MID->SetTextureParameterValue(FName("Texture"), *TexturePtr);
                    MID->SetScalarParameterValue(FName("Waiting"), 0.0f);
                }
            }
            WaitingMIDs.Remove(ID);
        }
    }
}

FVector2D ARealtimeRenderingPipeline::NormalizeSize(FIntPoint Size)
{
    if (Size.X < 1 || Size.Y < 1)
        return FVector2D(1.f, 1.f);

    int32 MinDimension = FMath::Min(Size.X, Size.Y);

    float NormalizedX = static_cast<float>(Size.X) / MinDimension;
    float NormalizedY = static_cast<float>(Size.Y) / MinDimension;

    return FVector2D(NormalizedX, NormalizedY);
}