#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Unit.h"
#include "ItemBase.generated.h"

class AMainGameState;
class AMainController;
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

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

public:
    UFUNCTION(BlueprintCallable)
    virtual void Initialization();

    void Spawn(FTransform& Transform);
    void SpawnAndAttachSkeleton(AUnit* Unit, EEquipmentSlots EquipmentSlots);
    void RemoveRepresentedActor();
    int32 GetSize() { return ItemData.Size.Y * ItemData.Size.X; }
    int32 GetWidth() { return ItemData.Size.X; }
    int32 GetHeight() { return ItemData.Size.Y; }
    TSubclassOf<ARepresentedActorBase> GetRepresentedClass() { return ItemData.RepresentedActorClass; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    AMainGameState* MainGameState;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    AMainController* MainController;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FItemData ItemData;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRotated = false;

public:
    UFUNCTION(BlueprintCallable)
    void Rotate();

    UFUNCTION(BlueprintCallable)
    bool IsRotated() { return bRotated; }
};
