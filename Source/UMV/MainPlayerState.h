#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "RealtimeRenderingPipeline.h"
#include "MainPlayerState.generated.h"

UCLASS()
class UMV_API AMainPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    AMainPlayerState();

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    ARealtimeRenderingPipeline* RealtimeRenderingPipeline;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<ARealtimeRenderingPipeline> RealtimeRenderingPipelineClass;

public:
    ARealtimeRenderingPipeline* GetRealtimeRenderingPipeline() { return RealtimeRenderingPipeline; }
};
