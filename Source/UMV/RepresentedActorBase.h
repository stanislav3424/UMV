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
    virtual void Tick(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;

public:
    virtual void InitializationRepresented(UItemBase* SetOwnerItem);
    virtual void InitializationEquipment();

    UItemBase* GetOwnerItem() { return OwnerItem; }

    bool PickUp(UInventory* Inventory, int32 IndexInventory = INDEX_NONE);

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OwnerItem", meta = (AllowPrivateAccess = "true"))
    UItemBase* OwnerItem;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UArrowComponent* ArrowComponent;
};