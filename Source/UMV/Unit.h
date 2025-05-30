#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Unit.generated.h"

class UItemBase;
class UInventory;
class UWeapon;
class ARepresentedActorBase;

UENUM(BlueprintType)
enum class EEquipmentSlots : uint8
{
    Backpack UMETA(DisplayName = "Backpack"),
    Weapon UMETA(DisplayName = "Weapon"),
};

UCLASS()
class UMV_API AUnit : public ACharacter
{
    GENERATED_BODY()

public:
    AUnit();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void PostInitializeComponents() override;

    // Select
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Select", meta = (AllowPrivateAccess = "true"))
    bool bSelect = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Selection")
    void SetSelect(bool bNewSelect);

private:
    void UpdateVisualizationSelect();

    //  /Затычка
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Select", meta = (AllowPrivateAccess = "true"))
    class UTextRenderComponent* SelectionTextComponent;

    // Equipment
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UInventory* Backpack;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment", meta = (AllowPrivateAccess = "true"))
    UWeapon* Weapon;

public:
    UFUNCTION(BlueprintCallable)
    UInventory* GetBackpack() { return Backpack; }

    UFUNCTION(BlueprintCallable)
    FName GetSocketName(EEquipmentSlots EquipmentSlots);

    UFUNCTION(BlueprintCallable)
    bool EquipmentSlotAvailable(EEquipmentSlots EquipmentSlots);

    UFUNCTION(BlueprintCallable)
    bool PutOnEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* AUnit::* SlotMember, EEquipmentSlots SlotEnum>
    bool PutOnEquipmentInternal(UItemBase* ItemBase);

public:
    UFUNCTION(BlueprintCallable)
    bool TakeOffEquipment(UItemBase* ItemBase, EEquipmentSlots EquipmentSlots);

private:
    template <typename ItemType, ItemType* AUnit::* SlotMember>
    bool TakeOffEquipmentInternal(UItemBase* ItemBase);
};