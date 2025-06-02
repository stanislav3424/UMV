#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "RepresentedUnitBase.generated.h"

class UUnitBase;
class UItemBase;
class UInventory;
class UWeapon;
class ARepresentedActorBase;
class AMainGameState;

UCLASS()
class UMV_API ARepresentedUnitBase : public ACharacter
{
    GENERATED_BODY()

public:
    ARepresentedUnitBase();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void PostInitializeComponents() override;

    // Initialization

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    bool bIndependent = false;

    void IndependentInitialization();

    // Owner UnitBase
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner UnitBase", meta = (AllowPrivateAccess = "true"))
    UUnitBase* UnitBase;

public:
    UUnitBase* GetUnitBase() { return UnitBase; }

    // Data

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    // Select
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Select", meta = (AllowPrivateAccess = "true"))
    bool bSelect = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Selection")
    void SetSelect(bool bNewSelect);

public:
    void UpdateVisualizationSelect();

    //  /Затычка
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Select", meta = (AllowPrivateAccess = "true"))
    class UTextRenderComponent* SelectionTextComponent;

};