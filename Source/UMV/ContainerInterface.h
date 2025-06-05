#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ContainerInterface.generated.h"

class UItemBase;

UINTERFACE(MinimalAPI)
class UContainerInterface : public UInterface
{
	GENERATED_BODY()
};

class UMV_API IContainerInterface
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Delete")
    void DeleteFromOwnerContainer(UItemBase* ItemBase);
};
