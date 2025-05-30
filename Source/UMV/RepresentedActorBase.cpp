#include "RepresentedActorBase.h"
#include "Components/StaticMeshComponent.h"
#include "Inventory.h"

ARepresentedActorBase::ARepresentedActorBase()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create root component
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // Create mesh component and attach to root
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    // Create arrow component and attach to root
    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->SetupAttachment(RootComponent);
}

void ARepresentedActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARepresentedActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARepresentedActorBase::InitializationRepresented(UItemBase* SetOwnerItem)
{
    if (!SetOwnerItem)
    {
        Destroy();
        return;
    }
    OwnerItem = SetOwnerItem;
}

void ARepresentedActorBase::InitializationEquipment() {

}

bool ARepresentedActorBase::PickUp(UInventory* Inventory, int32 Index)
{
    if (!Inventory)
        return false;
    if (!OwnerItem)
    {
        Destroy();
        return false;
    }
    if (Inventory->AddToInventory(OwnerItem, Index))
    {
        Destroy();
        return true;
    }
    else
        return false;
}