#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "RealtimeRenderingPipeline.h"
#include "Kismet/GameplayStatics.h"
#include "RepresentedUnitBase.h"
#include "UnitBase.h"
#include "ItemBase.generated.h"

class AMainGameState;
class AMainController;
class AMainPlayerState;
class ARepresentedActorBase;
class UInventory;

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UItemBase> ClassItemBase;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowAbstract = "false"))
    TSubclassOf<ARepresentedActorBase> ClassRepresentedActorBase;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint Size = {0, 0};
};

UCLASS(Blueprintable)
class UMV_API UItemBase : public UObject
{
    GENERATED_BODY()

    // Initialization
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    ARepresentedActorBase* RepresentedActorBase;

    // Data

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FName UnitName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    AMainGameState* MainGameState;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    AMainController* MainController;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FItemData ItemData;

public:
    UFUNCTION(BlueprintCallable)
    virtual void Initialization(FDataTableRowHandle InitializationDataTableRowHandle,
                                ARepresentedActorBase* InitializationRepresentedActorBase = nullptr);
    // SpawnRepresentedActorBase

    ARepresentedActorBase* SpawnRepresentedActorBase(const FTransform& SpawnTransform,
                                                   const FActorSpawnParameters& SpawnParameters);

    void Spawn(FTransform& Transform);
    void SpawnAndAttachSkeleton(UUnitBase* Unit, EEquipmentSlots EquipmentSlots);
    void RemoveRepresentedActor();
    int32 GetSize() { return ItemData.Size.Y * ItemData.Size.X; }
    int32 GetWidth() { return ItemData.Size.X; }
    int32 GetHeight() { return ItemData.Size.Y; }
    TSubclassOf<ARepresentedActorBase> GetRepresentedClass() { return ItemData.ClassRepresentedActorBase; }
    ARepresentedActorBase* GetRepresentedActor() { return RepresentedActorBase; }

protected:


    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRotated = false;

public:
    UFUNCTION(BlueprintCallable)
    void Rotate();

    UFUNCTION(BlueprintCallable)
    bool IsRotated() const { return bRotated; }

    // MID
public:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetMID(FIntPoint Size);
};
