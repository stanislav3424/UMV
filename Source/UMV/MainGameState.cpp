#include "MainGameState.h"

void AMainGameState::BeginPlay()
{
}

const FUnitData AMainGameState::GetUnitsData(const FDataTableRowHandle& DataTableRowHandle) const
{
    if (!DataTableRowHandle.DataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetUnitsData - DataTable is null!"));
        return FUnitData();
    }

    if (DataTableRowHandle.RowName == NAME_None)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetUnitsData - RowName is None!"));
        return FUnitData();
    }

    if (const FUnitData* FoundRow = DataTableRowHandle.DataTable->FindRow<FUnitData>(DataTableRowHandle.RowName, ""))
    {
        return *FoundRow;
    }

    UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetUnitsData - Row '%s' not found in DataTable!"),
           *DataTableRowHandle.RowName.ToString());
    return FUnitData();
}

const FItemData AMainGameState::GetItemData(const FDataTableRowHandle& DataTableRowHandle) const
{
    if (!DataTableRowHandle.DataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetItemData - DataTable is null!"));
        return FItemData();
    }

    if (DataTableRowHandle.RowName == NAME_None)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetItemData - RowName is None!"));
        return FItemData();
    }

    if (const FItemData* FoundRow = DataTableRowHandle.DataTable->FindRow<FItemData>(DataTableRowHandle.RowName, ""))
    {
        return *FoundRow;
    }

    UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetItemData - Row '%s' not found in DataTable!"),
           *DataTableRowHandle.RowName.ToString());
    return FItemData();
}

const FInventoryData AMainGameState::GetInventoryData(const FDataTableRowHandle& DataTableRowHandle) const
{
    if (!DataTableRowHandle.DataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetInventoryData - DataTable is null!"));
        return FInventoryData();
    }

    if (DataTableRowHandle.RowName == NAME_None)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetInventoryData - RowName is None!"));
        return FInventoryData();
    }

    if (const FInventoryData* FoundRow =
            DataTableRowHandle.DataTable->FindRow<FInventoryData>(DataTableRowHandle.RowName, ""))
    {
        return *FoundRow;
    }

    UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetInventoryData - Row '%s' not found in DataTable!"),
           *DataTableRowHandle.RowName.ToString());
    return FInventoryData();
}