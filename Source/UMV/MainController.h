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
class ARepresentedUnitBase;
class AMainHUD;
class UUnitBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectedUnitsChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUISelectedUnitChanged);

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
    TSet<UUnitBase*> SelectedUnits;

    UPROPERTY()
    TSet<UUnitBase*> NewSelectedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<UUnitBase*> AddedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    TSet<UUnitBase*> RemovedUnits;

    UPROPERTY(BlueprintReadOnly, Category = "Selection", meta = (AllowPrivateAccess = "true"))
    UUnitBase* UISelectedUnit;

    void UpdateUnitsSelection();
    bool AreUnitSetsEqual();
    void SelectUnit();

public:

    UPROPERTY(BlueprintAssignable, Category = "Selection")
    FOnSelectedUnitsChanged OnSelectedUnitsChanged;

    UPROPERTY(BlueprintAssignable, Category = "Selection")
    FOnSelectedUnitsChanged OnUISelectedUnitChanged;

    UFUNCTION(BlueprintCallable)
    bool UISelectUnit(UUnitBase* Unit);

    const TSet<UUnitBase*>& GetSelectedUnits() const { return SelectedUnits; };

   

    // HandleCommand

    bool MoveToLocation();

    // UI
private: 
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    float SizeCell = 25.0f;

public:
    float GetSizeCell() { return SizeCell; }


};