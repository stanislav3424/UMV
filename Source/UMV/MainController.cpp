#include "MainController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "MainHUD.h"
#include "Unit.h"

AMainController::AMainController() { bShowMouseCursor = true; }

void AMainController::BeginPlay()
{
    Super::BeginPlay();

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
    TSet<AUnit*> AddedUnits = NewSelectedUnits.Difference(SelectedUnits);
    TSet<AUnit*> RemovedUnits = SelectedUnits.Difference(NewSelectedUnits);
    for (AUnit* Unit : AddedUnits)
        if (IsValid(Unit))
            Unit->SetSelect(true);
    for (AUnit* Unit : RemovedUnits)
        if (IsValid(Unit))
            Unit->SetSelect(false);

    SelectedUnits = NewSelectedUnits;
    OnSelectedUnitsChanged.Broadcast();
}

bool AMainController::AreUnitSetsEqual()
{
    if (SelectedUnits.Num() != NewSelectedUnits.Num())
        return false;

    for (AUnit* Unit : SelectedUnits)
    {
        if (!NewSelectedUnits.Contains(Unit))
            return false;
    }
    return true;
}

void AMainController::SelectUnit() {
    FHitResult HitResult;
    NewSelectedUnits.Empty();
    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        if (IsValid(HitResult.GetActor()))
        {
            AUnit* Unit = Cast<AUnit>(HitResult.GetActor());
            if (IsValid(Unit))
                NewSelectedUnits.Add(Unit);
        }
    }
    UpdateUnitsSelection();
}

// HandleCommand

bool AMainController::MoveToLocation()
{
    bool bMove = false;
    FHitResult HitResult;

    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        for (AUnit* Unit : SelectedUnits)
        {
            if (!IsValid(Unit))
                continue;

            AAIController* AIController = Cast<AAIController>(Unit->GetController());
            if (AIController)
            {
                AIController->MoveToLocation(HitResult.Location);
                bMove = true;
            }
        }
    }

    return bMove;
}

