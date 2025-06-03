#include "RepresentedUnitBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ItemBase.h"
#include "Inventory.h"
#include "MainGameState.h"
#include "Weapon.h"
#include "RepresentedActorBase.h"

ARepresentedUnitBase::ARepresentedUnitBase()
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

void ARepresentedUnitBase::BeginPlay()
{
    Super::BeginPlay();

    MainGameState = Cast<AMainGameState>(GetWorld()->GetGameState());
    if (!MainGameState)
    {
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);
        return;
    }
    UnitData = MainGameState->GetUnitsData(DataTableRowHandle);
    if (bIndependent)
        IndependentInitialization();
    InitializingStats();
}

void ARepresentedUnitBase::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

void ARepresentedUnitBase::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));
}

// Initialization

void ARepresentedUnitBase::IndependentInitialization() { 
    UUnitBase* InitializationUnitBase = NewObject<UUnitBase>(this);
    InitializationUnitBase->Initialization(DataTableRowHandle, this);

    Initialization(InitializationUnitBase);
}

void ARepresentedUnitBase::Initialization(UUnitBase* InitializationUnitBase)
{
    if (UnitBase)
    {
        UE_LOG(LogTemp, Error, TEXT("Error in the file: %s, line: %d"), TEXT(__FILE__), __LINE__);
        return;
    }

    UnitBase = InitializationUnitBase;
}

void ARepresentedUnitBase::InitializingStats()
{
    UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement();
    if (!CharacterMovementComponent)
        return;
    CharacterMovementComponent->MaxWalkSpeed = UnitData.Speed;
}

// Select

void ARepresentedUnitBase::UpdateVisualizationSelect()
{
    // Затычка
    if (!SelectionTextComponent)
        return;
    if (!UnitBase)
        return;
    SelectionTextComponent->SetVisibility(UnitBase->IsSelect());
}
