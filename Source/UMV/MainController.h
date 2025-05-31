#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Containers/Set.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "MainController.generated.h"

class UInputAction;
class UInputMappingContext;
class AUnit;
class AMainHUD;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectedUnitsChanged);

UCLASS()
class UMV_API AMainController : public APlayerController
{
    GENERATED_BODY()

    friend class AMainHUD;

public:
    AMainController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Input
private:
    UPROPERTY(EditAnywhere, Category = "Input")
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* SelectionAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* CommandAction;

    void StartedSelection(const FInputActionValue& Value);
    void TriggeredSelection(const FInputActionValue& Value);
    void CompletedSelection(const FInputActionValue& Value);
    void HandleCommand(const FInputActionValue& Value);

    // Selection
private:
    FVector2D SelectionStart;
    FVector2D SelectionEnd;
    bool bIsSelecting = false;
    bool bVaitingSelecting = false;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<AUnit*> SelectedUnits;

    UPROPERTY()
    TSet<AUnit*> NewSelectedUnits;

    void UpdateUnitsSelection();
    bool AreUnitSetsEqual();
    void SelectUnit();

public:

    UPROPERTY(BlueprintAssignable, Category = "Selection")
    FOnSelectedUnitsChanged OnSelectedUnitsChanged;

    UFUNCTION(BlueprintPure, Category = "Selection")
    const TSet<AUnit*>& GetSelectedUnits() const { return SelectedUnits; };

    // HandleCommand

    bool MoveToLocation();

    // UI
private: 
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    float SizeCell = 25.0f;

public:
    float GetSizeCell() { return SizeCell; }
};