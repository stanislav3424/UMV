#include "MainGameState.h"

void AMainGameState::BeginPlay()
{
}

// GenerateUniqueName

FName AMainGameState::GenerateUniqueName(const UObject* Object)
{
    if (!Object)
        return NAME_None;

    FString ClassName = Object->GetClass()->GetName();

    const TCHAR* CharSet = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    FString RandomHash;
    for (int32 i = 0; i < 4; ++i)
    {
        RandomHash += CharSet[FMath::RandRange(0, 35)];
    }

    return FName(FString::Printf(TEXT("%s_%s"), *ClassName, *RandomHash));
}

// Create / Spawn

UUnitBase* AMainGameState::CreateUnitBase(const FDataTableRowHandle& DataTableRowHandle)
{
    FUnitData UnitData = GetUnitsData(DataTableRowHandle);
    if (!UnitData.ClassUnitBase)
    {
        UE_LOG(LogTemp, Error, TEXT("ClassUnitBase is not set in DataTable!"));
        return nullptr;
    }

    UUnitBase* UnitBase = NewObject<UUnitBase>(this, UnitData.ClassUnitBase);
    if (!UnitBase)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create UnitBase!"));
        return nullptr;
    }

    UnitBase->Initialization(DataTableRowHandle);
    return UnitBase;
}

UItemBase* AMainGameState::CreateItemBase(const FDataTableRowHandle& DataTableRowHandle)
{
    FItemData ItemData = GetItemData(DataTableRowHandle);
    if (!ItemData.ClassItemBase)
    {
        UE_LOG(LogTemp, Error, TEXT("ClassItemBase is not set in DataTable!"));
        return nullptr;
    }

    UItemBase* ItemBase = NewObject<UItemBase>(this, ItemData.ClassItemBase);
    if (!ItemBase)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create ItemBase!"));
        return nullptr;
    }

    ItemBase->Initialization(DataTableRowHandle);
    return ItemBase;
}

ARepresentedUnitBase* AMainGameState::SpawnUnit(const FDataTableRowHandle& DataTableRowHandle,
                                                const FTransform& SpawnTransform)
{
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    UUnitBase* UnitBase = CreateUnitBase(DataTableRowHandle);
    if (!UnitBase)
        return nullptr;
    return UnitBase->SpawnRepresentedUnitBase(SpawnTransform, SpawnParameters);
}

ARepresentedActorBase* AMainGameState::SpawnItem(const FDataTableRowHandle& DataTableRowHandle,
                                                const FTransform& SpawnTransform)
{
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    UItemBase* ItemBase = CreateItemBase(DataTableRowHandle);
    if (!ItemBase)
        return nullptr;
    return ItemBase->SpawnRepresentedActorBase(SpawnTransform, SpawnParameters);
}

// DataTable

template <typename DataType>
const DataType AMainGameState::GetDataFromDataTable(const FDataTableRowHandle& DataTableRowHandle) const
{
    if (!DataTableRowHandle.DataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetDataFromDataTable - DataTable is null!"));
        return DataType();
    }

    if (DataTableRowHandle.RowName == NAME_None)
    {
        UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetDataFromDataTable - RowName is None!"));
        return DataType();
    }

    if (const DataType* FoundRow = DataTableRowHandle.DataTable->FindRow<DataType>(DataTableRowHandle.RowName, ""))
    {
        return *FoundRow;
    }

    UE_LOG(LogTemp, Error, TEXT("AMainGameState::GetDataFromDataTable - Row '%s' not found in DataTable!"),
           *DataTableRowHandle.RowName.ToString());
    return DataType();
}

const FUnitData AMainGameState::GetUnitsData(const FDataTableRowHandle& DataTableRowHandle) const
{
    return GetDataFromDataTable<FUnitData>(DataTableRowHandle);
}

const FItemData AMainGameState::GetItemData(const FDataTableRowHandle& DataTableRowHandle) const
{
    return GetDataFromDataTable<FItemData>(DataTableRowHandle);
}

const FInventoryData AMainGameState::GetInventoryData(const FDataTableRowHandle& DataTableRowHandle) const
{
    return GetDataFromDataTable<FInventoryData>(DataTableRowHandle);
}