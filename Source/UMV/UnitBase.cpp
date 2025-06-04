#include "UnitBase.h"
#include "RepresentedUnitBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "ItemBase.h"
#include "Inventory.h"
#include "Weapon.h"
#include "MainGameState.h"
#include "RepresentedActorBase.h"

// Initialization

void UUnitBase::Initialization(FDataTableRowHandle InitializationDataTableRowHandle,
                               ARepresentedUnitBase* InitializationRepresentedUnitBase)
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

        UnitData = MainGameState->GetUnitsData(DataTableRowHandle);
    if (IsValid(InitializationRepresentedUnitBase))
        RepresentedUnitBase = InitializationRepresentedUnitBase;
    CheckEquipmentVisualization();

    if (MainGameState)
        UnitName = MainGameState->GenerateUniqueName(this);
}

// SpawnRepresentedUnitBase

ARepresentedUnitBase* UUnitBase::SpawnRepresentedUnitBase(const FTransform& SpawnTransform,
                                                          const FActorSpawnParameters& SpawnParameters)
{
    RepresentedUnitBase = GetWorld()->SpawnActor<ARepresentedUnitBase>(UnitData.ClassRepresentedUnitBase,
                                                                       SpawnTransform, SpawnParameters);
    if (IsValid(RepresentedUnitBase))
        RepresentedUnitBase->Initialization(this);
    else
        RepresentedUnitBase = nullptr;
    return RepresentedUnitBase;
}

// Select

void UUnitBase::SetSelect(bool bNewSelect)
{
    if (bSelect == bNewSelect)
        return;
    bSelect = bNewSelect;
    if (IsValid(RepresentedUnitBase))
        RepresentedUnitBase->UpdateVisualizationSelect();
}

// Equipment

FName UUnitBase::GetSocketName(EEquipmentSlots EquipmentSlots)
{
    FName SocketName;
    switch (EquipmentSlots)
    {
    case (EEquipmentSlots::Backpack):
        SocketName = TEXT("BackpackSocket");
        break;

    case (EEquipmentSlots::Weapon):
        SocketName = TEXT("WeaponSocket");
        break;

    default:
        break;
    }
    return SocketName;
}

bool UUnitBase::EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case (EEquipmentSlots::Backpack):
        if (!Backpack)
            return true;
        break;

    case (EEquipmentSlots::Weapon):
        if (!Weapon)
            return true;
        break;

    default:
        break;
    }
    return false;
}

bool UUnitBase::PutOnEquipment(UItemBase* EquipItem, EEquipmentSlots EquipmentSlots)
{
    if (!EquipItem)
        return false;

    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return PutOnEquipmentInternal<UInventory, &UUnitBase::Backpack, EEquipmentSlots::Backpack>(EquipItem);

    case EEquipmentSlots::Weapon:
        return PutOnEquipmentInternal<UWeapon, &UUnitBase::Weapon, EEquipmentSlots::Weapon>(EquipItem);

    default:
        return false;
    }
}

template <typename ItemType, ItemType* UUnitBase::* SlotMember, EEquipmentSlots SlotEnum>
bool UUnitBase::PutOnEquipmentInternal(UItemBase* ItemBase)
{
    if (this->*SlotMember != nullptr)
        return false;

    ItemType* Item = Cast<ItemType>(ItemBase);
    if (!Item)
        return false;
    UInventory* LocalInventory = ItemBase->GetOwnerInventory();
    if (LocalInventory)
        LocalInventory->RemoveItem(ItemBase);

    this->*SlotMember = Item;
    Item->SpawnAndAttachSkeleton(this, SlotEnum);
    OnEquipmentChanged.Broadcast();
    return true;
}

bool UUnitBase::TakeOffEquipment(UItemBase* GetItem, EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return TakeOffEquipmentInternal<UInventory, &UUnitBase::Backpack>(GetItem);

    case EEquipmentSlots::Weapon:
        return TakeOffEquipmentInternal<UWeapon, &UUnitBase::Weapon>(GetItem);

    default:
        return false;
    }
}

template <typename ItemType, ItemType* UUnitBase::* SlotMember>
bool UUnitBase::TakeOffEquipmentInternal(UItemBase* ItemBase)
{
    if (auto* Item = this->*SlotMember)
    {
        ItemBase = Item;
        Item->RemoveRepresentedActor();
        this->*SlotMember = nullptr;
        OnEquipmentChanged.Broadcast();
        return true;
    }
    return false;
}

// Visualization

void UUnitBase::CheckEquipmentVisualization()
{
    if (!IsValid(RepresentedUnitBase))
        return;
    CheckEquipmentVisualizationInternal(Backpack, EEquipmentSlots::Backpack);
    CheckEquipmentVisualizationInternal(Weapon, EEquipmentSlots::Weapon);
}

void UUnitBase::CheckEquipmentVisualizationInternal(UItemBase* Item, EEquipmentSlots EquipmentSlots)
{
    if (!IsValid(RepresentedUnitBase))
        return;

    if (Item)
        Item->SpawnAndAttachSkeleton(this, EquipmentSlots);
}