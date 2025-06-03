#pragma once

#include "Components/ArrowComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.h"
#include "RepresentedActorBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class UMV_API ARepresentedActorBase : public AActor
{
    GENERATED_BODY()

public:
    ARepresentedActorBase();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Initialization
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    FDataTableRowHandle DataTableRowHandle;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    bool bIndependent = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Initialization")
    void IndependentInitialization();

    UFUNCTION(BlueprintCallable, Category = "Initialization")
    void Initialization(UItemBase* InitializationItemBase);

    // Interaction
public:
    bool PickUp(UInventory* Inventory, int32 IndexInventory = INDEX_NONE);

    // Owner ItemBase
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OwnerItem", meta = (AllowPrivateAccess = "true"))
    UItemBase* ItemBase;

public:
    UItemBase* GetItemBase() { return ItemBase; }

    // Data
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    AMainGameState* MainGameState;

    FItemData ItemData;

    // Components
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UArrowComponent* ArrowComponent;
};