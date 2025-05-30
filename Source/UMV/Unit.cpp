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
    case (EEquipmentSlots::Backpack):
        if (Backpack)
            return false;
        else
        {
            Backpack = Cast<UInventory>(ItemBase);
            if (Backpack)
            {
                Backpack->SpawnAndAttachSkeleton(this, EEquipmentSlots::Backpack);
                return true;
            }
            else
                return false;
        }
        break;

    case (EEquipmentSlots::Weapon):
        if (Weapon)
            return false;
        else
        {
            Weapon = Cast<UWeapon>(ItemBase);
            if (Weapon)
            {
                Weapon->SpawnAndAttachSkeleton(this, EEquipmentSlots::Weapon);
                return true;
            }
            else
                return false;
        }
        break;

    default:
        break;
    }
    return false;
}

bool AUnit::TakeOffEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots)
{
    switch (EquipmentSlots)
    {
    case (EEquipmentSlots::Backpack):
        if (Backpack)
        {
            ItemBase = Backpack;
            Backpack->RemoveRepresentedActor();
            Backpack = nullptr;
            return true;
        }
        break;

    case (EEquipmentSlots::Weapon):
        if (Weapon)
        {
            ItemBase = Weapon;
            Weapon->RemoveRepresentedActor();
            Weapon = nullptr;
            return true;
        }
        break;

    default:
        break;
    }

    return false;
}
