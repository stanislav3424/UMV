#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "Inventory.generated.h"

class AMainGameState;
class AMainController;

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

USTRUCT(BlueprintType)
struct FLine
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StartX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StartY;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EndX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EndY;

};

UCLASS(Blueprintable)
class UMV_API UInventory : public UItemBase
{
    GENERATED_BODY()

public:
    virtual void Initialization() override;

    // Data
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<UItemBase*> Inventory;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FInventoryData InventoryData;

    // Data UI
public:
    UFUNCTION(BlueprintCallable)
    const FInventoryData GetInventoryData() const { return InventoryData; }

    UFUNCTION(BlueprintCallable)
    const TArray<FItemPositionData> GetItemsPositionData();

    // Add / Remove Item
public:
    UFUNCTION(BlueprintCallable)
    bool AddToInventory(UItemBase* AddItem, int32 IndexInventory = -1);

private:
    bool TryAddToInventory(UItemBase* AddItem, int32 IndexInventory);
    void AddToInventorySub(UItemBase* AddItem, int32 IndexInventory);
    int32 FaindTryAddToInventory(UItemBase* AddItem);

public:
    UFUNCTION(BlueprintCallable)
    bool RemoveItem(UItemBase* RemoveItem);

    UFUNCTION(BlueprintCallable)
    bool RemoveItemIndex(int32 IndexInventory);

private:
    void SubRemoveItem(UItemBase* RemoveItem);

public:
    UFUNCTION(BlueprintCallable)
    UItemBase* GetItemIndex(int32 IndexInventory);

private:
    int32 PositionToInt(FIntPoint Position);

    FIntPoint IntToPosition(int32 Index);

    // DrawLines
public:
    UFUNCTION(BlueprintCallable)
    TArray<FLine> GetDrawLines();
};