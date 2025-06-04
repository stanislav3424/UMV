#include "ItemBase.h"
#include "MainController.h"
#include "MainGameState.h"
#include "MainPlayerState.h"
#include "Components/SkeletalMeshComponent.h"
#include "RepresentedActorBase.h"
#include "Inventory.h"

void UItemBase::Initialization(FDataTableRowHandle InitializationDataTableRowHandle,
                               ARepresentedActorBase* InitializationRepresentedActorBase)
{
    DataTableRowHandle = InitializationDataTableRowHandle;
    if (!GetWorld())
    {
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);
        return;
    }
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
    {
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);
        return;
    }
    MainController = Cast<AMainController>(GetWorld()->GetFirstPlayerController());
    if (!MainController)
    {
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);
        return;
    }
    ItemData = MainGameState->GetItemData(DataTableRowHandle); 
    if (IsValid(InitializationRepresentedActorBase))
        RepresentedActorBase = InitializationRepresentedActorBase;
}

// SpawnRepresentedActorBase

ARepresentedActorBase* UItemBase::SpawnRepresentedActorBase(const FTransform& SpawnTransform,
                                                          const FActorSpawnParameters& SpawnParameters)
{
    RepresentedActorBase = GetWorld()->SpawnActor<ARepresentedActorBase>(ItemData.ClassRepresentedActorBase,
                                                                       SpawnTransform, SpawnParameters);
    if (IsValid(RepresentedActorBase))
        RepresentedActorBase->Initialization(this);
    else
        RepresentedActorBase = nullptr;
    return RepresentedActorBase;
}

void UItemBase::SpawnAndAttachSkeleton(UUnitBase* Unit, EEquipmentSlots EquipmentSlots)
{
    ARepresentedUnitBase* RepresentedUnitBase = Unit->GetRepresentedUnitBase();
    if (!IsValid(RepresentedUnitBase))
        return;
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParameters.Owner = RepresentedUnitBase;

    USkeletalMeshComponent* MeshRef = RepresentedUnitBase->GetMesh();
    if (!MeshRef)
        return;
    FName SocketName = Unit->GetSocketName(EquipmentSlots);
    if (!MeshRef->DoesSocketExist(SocketName))
        return;

    FTransform SpawnTransform = MeshRef->GetSocketTransform(SocketName);

    RepresentedActorBase =
        GetWorld()->SpawnActor<ARepresentedActorBase>(GetRepresentedClass(), SpawnTransform, SpawnParameters);

    if (IsValid(RepresentedActorBase))
    {
        RepresentedActorBase->AttachToComponent(MeshRef, FAttachmentTransformRules::SnapToTargetIncludingScale,
                                               SocketName);
    }
}

void UItemBase::RemoveRepresentedActor()
{
    if (IsValid(RepresentedActorBase))
        RepresentedActorBase->Destroy();
    RepresentedActorBase = nullptr;
}

void UItemBase::Rotate()
{
    bRotated = !bRotated;
    int32 a = ItemData.Size.Y;
    ItemData.Size.Y = ItemData.Size.X;
    ItemData.Size.X = a;
}

// MID

UMaterialInstanceDynamic* UItemBase::GetMID(FIntPoint Size)
{
    AMainPlayerState* MainPlayerState;
    MainPlayerState = Cast<AMainPlayerState>(MainController->PlayerState);
    if (!MainPlayerState)
        return nullptr;

    UMaterialInstanceDynamic* MID = MainPlayerState->GetRealtimeRenderingPipeline()->GetMID(this, Size);
    return MID;
}