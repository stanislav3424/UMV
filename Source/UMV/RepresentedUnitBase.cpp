#include "RepresentedUnitBase.h"
#include "UnitBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TextRenderComponent.h"
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
    IndependentInitialization();
}

void ARepresentedUnitBase::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

void ARepresentedUnitBase::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));
}

// Initialization

void ARepresentedUnitBase::IndependentInitialization()
{
    if (!bIndependent)
        return;
}

// Select

void ARepresentedUnitBase::SetSelect(bool bNewSelect)
{
    if (bSelect == bNewSelect)
        return;
    bSelect = bNewSelect;
    UpdateVisualizationSelect();
}

void ARepresentedUnitBase::UpdateVisualizationSelect()
{
    // Затычка
    if (SelectionTextComponent)
    {
        SelectionTextComponent->SetVisibility(bSelect);
    }
}
