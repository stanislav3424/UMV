#include "MainPlayerState.h"

AMainPlayerState::AMainPlayerState() {}

void AMainPlayerState::BeginPlay()
{
    Super::BeginPlay();

    if (RealtimeRenderingPipelineClass)
        RealtimeRenderingPipeline =
            GetWorld()->SpawnActor<ARealtimeRenderingPipeline>(RealtimeRenderingPipelineClass, FTransform::Identity);

    if (!RealtimeRenderingPipeline)
        return;

    RealtimeRenderingPipeline->SetActorHiddenInGame(true);
    RealtimeRenderingPipeline->SetActorEnableCollision(false);
}