#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "UnitBase.h"
#include "RepresentedUnitBase.generated.h"

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

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    bool bIndependent = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Initialization")
    void IndependentInitialization();

    UFUNCTION(BlueprintCallable, Category = "Initialization")
    void Initialization(UUnitBase* InitializationUnitBase);

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

    FUnitData UnitData;

    // Select

public:
    void UpdateVisualizationSelect();

    //  /Затычка
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Select", meta = (AllowPrivateAccess = "true"))
    class UTextRenderComponent* SelectionTextComponent;

};