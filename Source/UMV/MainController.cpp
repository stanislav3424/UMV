#include "MainController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "MainHUD.h"
#include "UnitBase.h"
#include "RepresentedUnitBase.h"

AMainController::AMainController() {  }

void AMainController::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;

    if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }
}

void AMainController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Started, this,
                                           &AMainController::StartedSelection);
        EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Triggered, this,
                                           &AMainController::TriggeredSelection);
        EnhancedInputComponent->BindAction(SelectionAction, ETriggerEvent::Completed, this,
                                           &AMainController::CompletedSelection);
        EnhancedInputComponent->BindAction(CommandAction, ETriggerEvent::Completed, this,
                                           &AMainController::HandleCommand);
    }
}

void AMainController::Tick(float DeltaTime)
{
    if (bIsSelecting || bVaitingSelecting)
    {
        FHitResult HitResult;
        this->GetHitResultUnderCursor(ECollisionChannel(ECC_Visibility), false, HitResult);
        if (!HitResult.bBlockingHit)
            return;

        FVector WorldLocation;
        WorldLocation = HitResult.Location;
        this->ProjectWorldLocationToScreen(WorldLocation, SelectionEnd, true);
    }
    if (bIsSelecting)
        UpdateUnitsSelection();
    if (!bVaitingSelecting)
        return;
    float Distance = FVector2D::Distance(SelectionStart, SelectionEnd);
    if (Distance > 10.f)
    {
        bIsSelecting = true;
        bVaitingSelecting = false;
    }
}

// Input

void AMainController::StartedSelection(const FInputActionValue& Value)
{
    FHitResult HitResult;
    this->GetHitResultUnderCursor(ECollisionChannel(ECC_Visibility), false, HitResult);
    if (!HitResult.bBlockingHit)
        return;

    FVector WorldLocation;
    WorldLocation = HitResult.Location;
    if (this->ProjectWorldLocationToScreen(WorldLocation, SelectionStart, true))
    {
        SelectionEnd = SelectionStart;
        bVaitingSelecting = true;
    }
}

void AMainController::TriggeredSelection(const FInputActionValue& Value) {}

void AMainController::CompletedSelection(const FInputActionValue& Value)
{
    if (!bIsSelecting && bVaitingSelecting)
        SelectUnit();

    bIsSelecting = false;
    bVaitingSelecting = false;
}

void AMainController::HandleCommand(const FInputActionValue& Value) { MoveToLocation(); }

// Selection

void AMainController::UpdateUnitsSelection()
{
    if (AreUnitSetsEqual())
        return;
    AddedUnits = NewSelectedUnits.Difference(SelectedUnits);
    RemovedUnits = SelectedUnits.Difference(NewSelectedUnits);
    for (UUnitBase* Unit : AddedUnits)
        if (Unit)
            Unit->SetSelect(true);
    for (UUnitBase* Unit : RemovedUnits)
        if (Unit)
            Unit->SetSelect(false);

    SelectedUnits = NewSelectedUnits;
    OnSelectedUnitsChanged.Broadcast();

    if (SelectedUnits.Contains(UISelectedUnit))
        return;
    for (UUnitBase* Unit : SelectedUnits)
        if (Unit)
        {
            UISelectUnit(Unit);
            break;
        }
}

bool AMainController::AreUnitSetsEqual()
{
    if (SelectedUnits.Num() != NewSelectedUnits.Num())
        return false;

    for (UUnitBase* Unit : SelectedUnits)
    {
        if (Unit)
            if (!NewSelectedUnits.Contains(Unit))
                return false;
    }
    return true;
}

void AMainController::SelectUnit()
{
    FHitResult HitResult;
    NewSelectedUnits.Empty();
    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        if (IsValid(HitResult.GetActor()))
        {
            ARepresentedUnitBase* Unit = Cast<ARepresentedUnitBase>(HitResult.GetActor());
            if (IsValid(Unit))
            {
                UUnitBase* UnitBase = Unit->GetUnitBase();
                if (UnitBase)
                    NewSelectedUnits.Add(UnitBase);
            }
        }
    }
    UpdateUnitsSelection();
}

bool AMainController::UISelectUnit(UUnitBase* Unit)
{
    if (!IsValid(Unit))
        return false;
    if (!SelectedUnits.Contains(Unit))
        return false;

    UISelectedUnit = Unit;
    OnUISelectedUnitChanged.Broadcast();
    return true;
}

// HandleCommand

bool AMainController::MoveToLocation()
{
    bool bMove = false;
    FHitResult HitResult;

    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        for (UUnitBase* Unit : SelectedUnits)
        {
            if (Unit)
                continue;

            AAIController* AIController = Cast<AAIController>(Unit->GetRepresentedUnitBase()->GetController());
            if (AIController)
            {
                AIController->MoveToLocation(HitResult.Location);
                bMove = true;
            }
        }
    }

    return bMove;
}

// UI

