#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "Inventory.generated.h"

USTRUCT(BlueprintType)
struct FInventoryData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint Size;
};

USTRUCT(BlueprintType)
struct FItemPositionData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UItemBase* Item;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FIntPoint Position;
};

UCLASS(Blueprintable)
class UMV_API UInventory : public UItemBase
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    virtual void Initialization() override;

    // Data
private:
    UPROPERTY()
    TArray<UItemBase*> Inventory;

protected:
    FInventoryData InventoryData;

    // Data UI
public:
    UFUNCTION(BlueprintCallable)
    const FInventoryData GetInventoryData() const { return InventoryData; }

    UFUNCTION(BlueprintCallable)
    const TArray<FItemPositionData> GetItemsPositionData();

    // Add / Remove Item
public:
    bool AddToInventory(UItemBase* AddItem, int32 IndexInventory = INDEX_NONE);

private:
    void AddToInventorySub(UItemBase* AddItem, int32 IndexInventory);
    bool TryAddToInventory(UItemBase* AddItem, int32 IndexInventory);
    int32 FaindTryAddToInventory(UItemBase* AddItem);

public:
    bool RemoveItem(UItemBase* RemoveItem);
    bool RemoveItem(int32 IndexInventory);

private:
    void SubRemoveItem(UItemBase* RemoveItem);

    //

public:
    UItemBase* GetItemIndex(int32 IndexInventory);
    //
};