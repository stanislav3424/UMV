#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "ContainerInterface.h"
#include "Inventory.generated.h"

class AMainGameState;
class AMainController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChanged);

USTRUCT(BlueprintType)
struct FInventoryData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint Size = {0, 0};
};

USTRUCT(BlueprintType)
struct FItemPositionData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UItemBase* Item = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FIntPoint Position = {0, 0};
};

USTRUCT(BlueprintType)
struct FLine
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StartX = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StartY = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EndX = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EndY = 0.f;

};

UCLASS(Blueprintable)
class UMV_API UInventory : public UItemBase, public IContainerInterface
{
    GENERATED_BODY()

public:
    virtual void Initialization(FDataTableRowHandle InitializationDataTableRowHandle,
                                ARepresentedActorBase* InitializationRepresentedActorBase = nullptr) override;

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
    const TArray<FItemPositionData> GetItemsPositionData() const;

    UFUNCTION(BlueprintCallable)
    const int32 GetTopLeftIndex(UItemBase* TestItem, FVector2D Vector2D) const;

    // Add / Remove Item

    public:
    virtual void DeleteFromOwnerContainer_Implementation(UItemBase* ItemBase) override;

public:
    UFUNCTION(BlueprintCallable)
    bool AddToInventory(UItemBase* AddItem, int32 IndexInventory = -1);

    UFUNCTION(BlueprintCallable)
    bool TryAddToInventory(UItemBase* AddItem, int32 IndexInventory);

private:
    void AddToInventorySub(UItemBase* AddItem, int32 IndexInventory);
    int32 FaindTryAddToInventory(UItemBase* AddItem);

public:
    UFUNCTION(BlueprintCallable)
    bool RemoveItem(UItemBase* RemoveItem);

    UFUNCTION(BlueprintCallable)
    bool RemoveItemIndex(int32 IndexInventory);

private:
    void SubRemoveItem(UItemBase* RemoveItem);

    void CheckInventoryEmpty();

    // 
public:
    UFUNCTION(BlueprintCallable)
    UItemBase* GetItemIndex(int32 IndexInventory) const;

private:
    int32 PositionToInt(FIntPoint Position) const;
    FIntPoint IntToPosition(int32 Index) const;

public:
    UPROPERTY(BlueprintAssignable, Category = "Add / Remove Item")
    FOnInventoryChanged OnInventoryChanged;

    // DrawLines
public:
    UFUNCTION(BlueprintCallable)
    TArray<FLine> GetDrawLines() const;
};