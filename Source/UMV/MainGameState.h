#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/DataTable.h"
#include "MainGameState.generated.h"

UCLASS()
class UMV_API AMainGameState : public AGameStateBase
{
    GENERATED_BODY()

public:

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Data")
    UDataTable* ItemDataTable;
};
