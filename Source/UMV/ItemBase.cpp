#include "ItemBase.h"
#include "MainController.h"
#include "MainGameState.h"
#include "MainPlayerState.h"
#include "Components/SkeletalMeshComponent.h"
#include "RepresentedActorBase.h"
#include "Inventory.h"

void UItemBase::Initialization()
{
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    MainController = Cast<AMainController>(GetWorld()->GetFirstPlayerController());
    if (!MainGameState)
        return;
    if (MainGameState->ItemDataTable)
    {
        FItemData* FoundRow = MainGameState->ItemDataTable->FindRow<FItemData>(DataTableRowHandle.RowName, TEXT(""));
        if (FoundRow)
        {
            ItemData = *FoundRow;
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("UItemBase::Initialization: Row '%s' not found in ItemDataTable"),
                   *DataTableRowHandle.RowName.ToString());
            ConditionalBeginDestroy();
            return;
        }
    }
}

void UItemBase::Spawn(FTransform& Transform)
{
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    RepresentedActor =
        GetWorld()->SpawnActor<ARepresentedActorBase>(ItemData.RepresentedActorClass, Transform, SpawnParameters);
}

void UItemBase::SpawnAndAttachSkeleton(AUnit* Unit, EEquipmentSlots EquipmentSlots)
{
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParameters.Owner = Unit;

    USkeletalMeshComponent* MeshRef = Unit->GetMesh();
    if (!MeshRef)
        return;
    FName SocketName = Unit->GetSocketName(EquipmentSlots);
    if (!MeshRef->DoesSocketExist(SocketName))
        return;

    FTransform SpawnTransform = MeshRef->GetSocketTransform(SocketName);

    RepresentedActor =
        GetWorld()->SpawnActor<ARepresentedActorBase>(GetRepresentedClass(), SpawnTransform, SpawnParameters);

    if (IsValid(RepresentedActor))
    {
        RepresentedActor->InitializationEquipment();
        RepresentedActor->AttachToComponent(MeshRef, FAttachmentTransformRules::SnapToTargetIncludingScale,
                                               SocketName);
    }
}

void UItemBase::RemoveRepresentedActor()
{
    if (IsValid(RepresentedActor))
        RepresentedActor->Destroy();
    RepresentedActor = nullptr;
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