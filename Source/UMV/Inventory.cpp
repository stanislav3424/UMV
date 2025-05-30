#include "Inventory.h"

void UInventory::Initialization()
{
    Super::Initialization();
    Inventory.SetNum(ItemData.Size.X * ItemData.Size.Y);
}

bool UInventory::AddToInventory(UItemBase* AddItem, int32 IndexInventory)
{
    if (!AddItem)
        return false;
    if (IndexInventory == INDEX_NONE)
    {
        int32 Index = FaindTryAddToInventory(AddItem);
        if (Index == INDEX_NONE)
            return false;
        else
        {
            AddToInventorySub(AddItem, Index);
            return true;
        }
    }
    else
    {
        if (TryAddToInventory(AddItem, IndexInventory))
        {
            AddToInventorySub(AddItem, IndexInventory);
            return true;
        }
        else
            return false;
    }
}

void UInventory::AddToInventorySub(UItemBase* AddItem, int32 IndexInventory)
{
    if (!AddItem || !Inventory.IsValidIndex(IndexInventory))
        return;

    const int32 Width = AddItem->GetWidth();
    const int32 InventoryWidth = InventoryData.Size.X;

    for (int32 Index = 0; Index < AddItem->GetSize(); ++Index)
    {
        const int32 CurrentIndex = IndexInventory + (Index % Width) + (Index / Width) * InventoryWidth;
        if (!Inventory.IsValidIndex(CurrentIndex))
            break;
        Inventory[CurrentIndex] = AddItem;
    }
}

bool UInventory::TryAddToInventory(UItemBase* AddItem, int32 IndexInventory)
{
    if (!AddItem || !Inventory.IsValidIndex(IndexInventory))
        return false;

    const int32 Width = AddItem->GetWidth();
    const int32 InventoryWidth = InventoryData.Size.X;
    const int32 InventoryHeight = InventoryData.Size.Y;

    const int32 StartRow = IndexInventory / InventoryWidth;
    const int32 StartCol = IndexInventory % InventoryWidth;

    if (StartCol + Width > InventoryWidth || StartRow + (AddItem->GetSize() / Width) > InventoryHeight)
        return false;

    for (int32 Index = 0; Index < AddItem->GetSize(); ++Index)
    {
        const int32 CurrentIndex = IndexInventory + (Index % Width) + (Index / Width) * InventoryWidth;
        if (Inventory[CurrentIndex] != nullptr)
            return false;
    }

    return true;
}

int32 UInventory::FaindTryAddToInventory(UItemBase* AddItem)
{
    if (!AddItem)
        return INDEX_NONE;

    for (int32 Index = 0; Index < Inventory.Num(); ++Index)
        if (Inventory[Index] == nullptr && TryAddToInventory(AddItem, Index))
            return Index;
    return INDEX_NONE;
}

bool UInventory::RemoveItem(UItemBase* RemoveItem)
{
    if (!RemoveItem)
        return false;
    SubRemoveItem(RemoveItem);
    return true;
}

bool UInventory::RemoveItem(int32 IndexInventory)
{
    UItemBase* Item = GetItemIndex(IndexInventory);
    if (!Item)
        return false;
    RemoveItem(Item);
    return true;
}

void UInventory::SubRemoveItem(UItemBase* RemoveItem)
{
    if (!RemoveItem)
        return;
    for (auto& Slot : Inventory)
        if (Slot == RemoveItem)
            Slot = nullptr;
}

UItemBase* UInventory::GetItemIndex(int32 IndexInventory)
{
    if (Inventory.IsValidIndex(IndexInventory))
        return Inventory[IndexInventory];
    else
        return nullptr;
}

const TArray<FItemPositionData> UInventory::GetItemsPositionData()
{
    TArray<FItemPositionData> ItemPositionData;
    TArray<UItemBase*> ProcessedItems;

    const int32 InventoryWidth = InventoryData.Size.X;

    for (int32 Index = 0; Index < Inventory.Num(); ++Index)
    {
        UItemBase* CurrentItem = Inventory[Index];

        if (!CurrentItem || ProcessedItems.Contains(CurrentItem))
            continue;

        ProcessedItems.Add(CurrentItem);

        FIntPoint Position;
        Position.X = Index % InventoryWidth;
        Position.Y = Index / InventoryWidth;

        FItemPositionData NewData;
        NewData.Item = CurrentItem;
        NewData.Position = Position;

        ItemPositionData.Add(NewData);
    }

    return ItemPositionData;
}