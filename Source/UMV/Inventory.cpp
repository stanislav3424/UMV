#include "Inventory.h"
#include "MainGameState.h"
#include "MainController.h"

void UInventory::Initialization()
{
    Super::Initialization();
    if (!MainGameState)
        return;


    InventoryData = MainGameState->GetInventoryData(DataTableRowHandle);

    Inventory.SetNum(InventoryData.Size.X * InventoryData.Size.Y);
}

// Add / Remove Item

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

    const int32 InventoryWidth = InventoryData.Size.X;
    const int32 InventoryHeight = InventoryData.Size.Y;
    const int32 WidthItem = AddItem->GetWidth();
    const int32 HeightItem = AddItem->GetHeight();

    FIntPoint StartPosition = IntToPosition(IndexInventory);
    if (StartPosition.X == INDEX_NONE || StartPosition.Y == INDEX_NONE)
        return false;

    if (StartPosition.X + WidthItem > InventoryWidth || StartPosition.Y + HeightItem > InventoryHeight)
        return false;

    for (int32 Y = 0; Y < HeightItem; ++Y)
        for (int32 X = 0; X < WidthItem; ++X)
        {
            const int32 CheckX = StartPosition.X + X;
            const int32 CheckY = StartPosition.Y + Y;
            const int32 CheckIndex = CheckY * InventoryWidth + CheckX;

            if (!Inventory.IsValidIndex(CheckIndex) || Inventory[CheckIndex] != nullptr)
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

bool UInventory::RemoveItemIndex(int32 IndexInventory)
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

int32 UInventory::PositionToInt(FIntPoint Position)
{
    if (InventoryData.Size.X <= 0 || InventoryData.Size.Y <= 0)
    {
        return INDEX_NONE;
    }

    if (Position.X < 0 || Position.Y < 0 || Position.X >= InventoryData.Size.X || Position.Y >= InventoryData.Size.Y)
    {
        return INDEX_NONE;
    }

    return Position.Y * InventoryData.Size.X + Position.X;
}

FIntPoint UInventory::IntToPosition(int32 Index)
{
    FIntPoint Position;

    if (InventoryData.Size.X <= 0 || InventoryData.Size.Y <= 0)
    {
        Position.X = INDEX_NONE;
        Position.Y = INDEX_NONE;
        return Position;
    }

    if (Index < 0 || Index >= Inventory.Num())
    {
        Position.X = INDEX_NONE;
        Position.Y = INDEX_NONE;
        return Position;
    }

    Position.X = Index % InventoryData.Size.X;
    Position.Y = Index / InventoryData.Size.X;

    return Position;
}

// Data UI

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

// DrawLines

TArray<FLine> UInventory::GetDrawLines()
{
    TArray<FLine> Lines;
    float SizeCell = MainController->GetSizeCell();

    const int32 GridWidth = InventoryData.Size.X;
    const int32 GridHeight = InventoryData.Size.Y;

    const float TotalWidth = GridWidth * SizeCell;
    const float TotalHeight = GridHeight * SizeCell;

    for (int32 row = 0; row <= GridHeight; row++)
    {
        FLine Line;
        Line.StartX = 0.0f;
        Line.StartY = row * SizeCell;
        Line.EndX = TotalWidth;
        Line.EndY = Line.StartY;
        Lines.Add(Line);
    }

    for (int32 col = 0; col <= GridWidth; col++)
    {
        FLine Line;
        Line.StartX = col * SizeCell;
        Line.StartY = 0.0f;
        Line.EndX = Line.StartX;
        Line.EndY = TotalHeight;
        Lines.Add(Line);
    }

    return Lines;
}