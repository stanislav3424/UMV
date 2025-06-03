#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/DataTable.h"
#include "UnitBase.h"
#include "ItemBase.h"
#include "Inventory.h"
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

    // DT
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
