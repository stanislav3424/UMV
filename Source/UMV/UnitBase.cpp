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
        return;
    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (MainGameState)
        UnitData = MainGameState->GetUnitsData(DataTableRowHandle);
    if (IsValid(InitializationRepresentedUnitBase))
        RepresentedUnitBase = InitializationRepresentedUnitBase;
    CheckEquipmentVisualization();
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

bool UUnitBase::PutOnEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots)
{
    if (!ItemBase)
        return false;

    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return PutOnEquipmentInternal<UInventory, &UUnitBase::Backpack, EEquipmentSlots::Backpack>(ItemBase);

    case EEquipmentSlots::Weapon:
        return PutOnEquipmentInternal<UWeapon, &UUnitBase::Weapon, EEquipmentSlots::Weapon>(ItemBase);

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

    this->*SlotMember = Item;
    Item->SpawnAndAttachSkeleton(this, SlotEnum);
    return true;
}

bool UUnitBase::TakeOffEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return TakeOffEquipmentInternal<UInventory, &UUnitBase::Backpack>(ItemBase);

    case EEquipmentSlots::Weapon:
        return TakeOffEquipmentInternal<UWeapon, &UUnitBase::Weapon>(ItemBase);

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