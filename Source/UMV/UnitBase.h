#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ContainerInterface.h"
#include "UnitBase.generated.h"

class ARepresentedUnitBase;
class UItemBase;
class UInventory;
class UWeapon;
class ARepresentedActorBase;
class AMainGameState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquipmentChanged);

UENUM(BlueprintType)
enum class EEquipmentSlots : uint8
{
    Backpack UMETA(DisplayName = "Backpack"),
    Weapon UMETA(DisplayName = "Weapon"),
};

USTRUCT(BlueprintType)
struct FUnitData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UUnitBase> ClassUnitBase;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowAbstract = "false"))
    TSubclassOf<ARepresentedUnitBase> ClassRepresentedUnitBase;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Speed = 600.f;
};

UCLASS(Blueprintable)
class UMV_API UUnitBase : public UObject, public IContainerInterface
{
    GENERATED_BODY()

    // Initialization
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

public:
    void Initialization(FDataTableRowHandle InitializationDataTableRowHandle,
                        ARepresentedUnitBase* InitializationRepresentedUnitBase = nullptr);

    // Data

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    FUnitData UnitData;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    FName UnitName;

    // RepresentedUnitBase
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RepresentedUnitBase",
              meta = (AllowPrivateAccess = "true"))
    ARepresentedUnitBase* RepresentedUnitBase;

public:
    ARepresentedUnitBase* GetRepresentedUnitBase() { return RepresentedUnitBase; }

    // SpawnRepresentedUnitBase

    ARepresentedUnitBase* SpawnRepresentedUnitBase(const FTransform& SpawnTransform,
                                                   const FActorSpawnParameters& SpawnParameters);

    // Select
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Select", meta = (AllowPrivateAccess = "true"))
    bool bSelect = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Selection")
    void SetSelect(bool bNewSelect);

    bool IsSelect() const { return bSelect; }

    // Equipment
public:
    virtual void DeleteFromOwnerContainer_Implementation(UItemBase* ItemBase) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UInventory* Backpack;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UWeapon* Weapon;

public:
    UInventory* GetBackpack() { return Backpack; }

    UFUNCTION(BlueprintCallable)
    FName GetSocketName(EEquipmentSlots EquipmentSlots);

    UFUNCTION(BlueprintCallable)
    bool EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots);

    UFUNCTION(BlueprintCallable)
    bool PutOnEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* UUnitBase::* SlotMember, EEquipmentSlots SlotEnum>
    bool PutOnEquipmentInternal(UItemBase* ItemBase);

public:
    UFUNCTION(BlueprintCallable)
    bool TakeOffEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* UUnitBase::* SlotMember>
    bool TakeOffEquipmentInternal(UItemBase* ItemBase);

public:
    FOnEquipmentChanged OnEquipmentChanged;

    // Visualization
private:
    void CheckEquipmentVisualization();
    void CheckEquipmentVisualizationInternal(UItemBase* Item, EEquipmentSlots EquipmentSlots);
};