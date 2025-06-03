#include "RepresentedActorBase.h"
#include "Components/StaticMeshComponent.h"
#include "Inventory.h"

ARepresentedActorBase::ARepresentedActorBase()
{
    PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

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

// Initialization

void ARepresentedActorBase::IndependentInitialization()
{
    UItemBase* InitializationItemBase = NewObject<UItemBase>(this);
    InitializationItemBase->Initialization(DataTableRowHandle, this);

    Initialization(InitializationItemBase);
}

void ARepresentedActorBase::Initialization(UItemBase* InitializationItemBase)
{
    if (ItemBase)
    {
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);
        return;
    }

    ItemBase = InitializationItemBase;
}

// Interaction

bool ARepresentedActorBase::PickUp(UInventory* Inventory, int32 Index)
{
    if (!Inventory)
        return false;
    if (!ItemBase)
    {
        Destroy();
        return false;
    }
    if (Inventory->AddToInventory(ItemBase, Index))
    {
        Destroy();
        return true;
    }
    else
        return false;
}