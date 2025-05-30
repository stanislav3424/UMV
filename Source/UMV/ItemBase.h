#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Unit.h"
#include "ItemBase.generated.h"

class AMainGameState;
class ARepresentedActorBase;
class UInventory;

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ItemID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowAbstract = "false"))
    TSubclassOf<ARepresentedActorBase> RepresentedActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint Size;
};

UCLASS(Blueprintable)
class UMV_API UItemBase : public UObject
{
    GENERATED_BODY()

    // Initialization
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    ARepresentedActorBase* RepresentedActor;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

public:
    virtual void Initialization();
    void Spawn(FTransform& Transform);
    void SpawnAndAttachSkeleton(AUnit* Unit, EEquipmentSlots EquipmentSlots);
    void RemoveRepresentedActor();
    int32 GetSize() { return ItemData.Size.Y * ItemData.Size.X; }
    int32 GetWidth() { return ItemData.Size.X; }
    TSubclassOf<ARepresentedActorBase> GetRepresentedClass() { return ItemData.RepresentedActorClass; }

protected:
    UPROPERTY()
    AMainGameState* MainGameState;

    FItemData ItemData;

    bool bRotated = false;

public:
    void Rotate();
    bool IsRotated() { return bRotated; }
};
