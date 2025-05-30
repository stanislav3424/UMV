#include "Unit.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "ItemBase.h"
#include "Inventory.h"
#include "Weapon.h"
#include "RepresentedActorBase.h"

AUnit::AUnit()
{
    PrimaryActorTick.bCanEverTick = true;

    GetCapsuleComponent()->InitCapsuleSize(34.0f, 95.0f);
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
    GetCapsuleComponent()->bHiddenInGame = false;
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Затычка
    SelectionTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SelectionText"));
    SelectionTextComponent->SetupAttachment(RootComponent);
    SelectionTextComponent->SetRelativeLocation(FVector(0, 0, 120));
    SelectionTextComponent->SetHorizontalAlignment(EHTA_Center);
    SelectionTextComponent->SetVerticalAlignment(EVRTA_TextBottom);
    SelectionTextComponent->SetVisibility(false);
    SelectionTextComponent->SetText(FText::FromString("Selected"));
    SelectionTextComponent->SetTextRenderColor(FColor::Green);

}

void AUnit::BeginPlay()
{   
    Super::BeginPlay();
}

void AUnit::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AUnit::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));
}

// Select

void AUnit::SetSelect(bool bNewSelect)
{
    if (bSelect == bNewSelect)
        return;
    bSelect = bNewSelect;
    UpdateVisualizationSelect();
}

void AUnit::UpdateVisualizationSelect()
{
    // Затычка
    if (SelectionTextComponent)
    {
        SelectionTextComponent->SetVisibility(bSelect);
    }
}

// Equipment

FName AUnit::GetSocketName(EEquipmentSlots EquipmentSlots)
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

bool AUnit::EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots)
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

bool AUnit::PutOnEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots)
{
    if (!ItemBase)
        return false;

    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return PutOnEquipmentInternal<UInventory, &AUnit::Backpack, EEquipmentSlots::Backpack>(ItemBase);

    case EEquipmentSlots::Weapon:
        return PutOnEquipmentInternal<UWeapon, &AUnit::Weapon, EEquipmentSlots::Weapon>(ItemBase);

    default:
        return false;
    }
}

template <typename ItemType, ItemType* AUnit::* SlotMember, EEquipmentSlots SlotEnum>
bool AUnit::PutOnEquipmentInternal(UItemBase* ItemBase)
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

bool AUnit::TakeOffEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case EEquipmentSlots::Backpack:
        return TakeOffEquipmentInternal<UInventory, &AUnit::Backpack>(ItemBase);

    case EEquipmentSlots::Weapon:
        return TakeOffEquipmentInternal<UWeapon, &AUnit::Weapon>(ItemBase);

    default:
        return false;
    }
}

template <typename ItemType, ItemType* AUnit::* SlotMember>
bool AUnit::TakeOffEquipmentInternal(UItemBase* ItemBase)
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
