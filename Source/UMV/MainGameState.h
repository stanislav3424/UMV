#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "UnitBase.h"
#include "ItemBase.h"
#include "Inventory.h"
#include "RepresentedUnitBase.h"
#include "RepresentedActorBase.h"
#include "MainGameState.generated.h"

UCLASS()
class UMV_API AMainGameState : public AGameStateBase
{
    GENERATED_BODY()

public:

protected:
    virtual void BeginPlay() override;

    // GenerateUniqueName

public:
    static FName GenerateUniqueName(const UObject* Object);

    FActorSpawnParameters ActorSpawnParameters;

    // Create / Spawn
    UFUNCTION(BlueprintCallable, Category = "Create")
    UUnitBase* CreateUnitBase(const FDataTableRowHandle& DataTableRowHandle);

    UFUNCTION(BlueprintCallable, Category = "Create")
    UItemBase* CreateItemBase(const FDataTableRowHandle& DataTableRowHandle);

    UFUNCTION(BlueprintCallable, Category = "Create")
    ARepresentedUnitBase* SpawnUnit(const FDataTableRowHandle& DataTableRowHandle, const FTransform& SpawnTransform);

    UFUNCTION(BlueprintCallable, Category = "Create")
    ARepresentedActorBase* SpawnItem(const FDataTableRowHandle& DataTableRowHandle, const FTransform& SpawnTransform);
    // DataTable
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UDataTable* UnitsDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UDataTable* ItemDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UDataTable* InventoryDataTable;

public:
    UFUNCTION(BlueprintCallable, Category = "Data")
    const FUnitData GetUnitsData(const FDataTableRowHandle& DataTableRowHandle) const;

    UFUNCTION(BlueprintCallable, Category = "Data")
    const FItemData GetItemData(const FDataTableRowHandle& DataTableRowHandle) const;

    UFUNCTION(BlueprintCallable, Category = "Data")
    const FInventoryData GetInventoryData(const FDataTableRowHandle& DataTableRowHandle) const;

private:
    template <typename DataType>
    const DataType GetDataFromDataTable(const FDataTableRowHandle& DataTableRowHandle) const;
};
