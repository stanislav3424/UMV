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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDradAndDropRotated);

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
    FDataTableRowHandle ChildDataTableRowHandle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint Size = {0, 0};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsStorable = true;
};

UCLASS(Blueprintable)
class UMV_API UItemBase : public UObject
{
    GENERATED_BODY()

    // Initialization
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    ARepresentedActorBase* RepresentedActorBase;

public:
    UFUNCTION(BlueprintCallable)
    virtual void Initialization(FDataTableRowHandle InitializationDataTableRowHandle,
                                ARepresentedActorBase* InitializationRepresentedActorBase = nullptr);

    // Data

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FName UnitName;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainController* MainController;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FItemData ItemData;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    UObject* OwnerContainer;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    bool bIsStorable = true;

public:
    bool GetIsStorable() { return bIsStorable; }
    void SetOwnerInventory(UObject* NewOwnerContainer);
    UObject* GetOwnerInventory() { return OwnerContainer; }

    // SpawnRepresentedActorBase
public:
    ARepresentedActorBase* SpawnRepresentedActorBase(const FTransform& SpawnTransform,
                                                     const FActorSpawnParameters& SpawnParameters);
    void SpawnAndAttachSkeleton(UUnitBase* Unit, EEquipmentSlots EquipmentSlots);
    void RemoveRepresentedActor();
    FIntPoint GetSize() { return ItemData.Size; }
    int32 GetSizeVolume() { return ItemData.Size.Y * ItemData.Size.X; }
    int32 GetWidth() { return ItemData.Size.X; }
    int32 GetHeight() { return ItemData.Size.Y; }
    TSubclassOf<ARepresentedActorBase> GetRepresentedClass() { return ItemData.ClassRepresentedActorBase; }
    ARepresentedActorBase* GetRepresentedActor() { return RepresentedActorBase; }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    bool bRotated = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    bool bDradAndDropRotated = false;

public:
    void Rotate();
    bool IsRotated() const { return bRotated; }

    UFUNCTION(BlueprintCallable)
    void DradAndDropRotated();

    FOnDradAndDropRotated OnDradAndDropRotated;

    // MID
public:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetMID(FIntPoint Size);
};
