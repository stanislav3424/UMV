#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Containers/Map.h"
#include "Math/UnrealMathUtility.h"
#include "RealtimeRenderingPipeline.generated.h"

class AMainController;
class UItemBase;
class ARepresentedActorBase;
class USceneCaptureComponent2D;
class USpotLightComponent;

UCLASS(Blueprintable)
class UMV_API ARealtimeRenderingPipeline : public AActor
{
    GENERATED_BODY()

public:
    ARealtimeRenderingPipeline();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    void InitializeeComponents();

private:
    UPROPERTY()
    AMainController* MainController;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    float CaptureScaleModifier = 1.1f;

    TMultiMap<int32, UMaterialInstanceDynamic*> WaitingMIDs;

    UPROPERTY()
    TMap<int32, UTextureRenderTarget2D*> MapTextures;

    TQueue<UItemBase*> RenderQueue;

    UPROPERTY()
    ARepresentedActorBase* RenderActor;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USceneCaptureComponent2D* SceneCapture;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USpotLightComponent* SpotLight;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Initialization", meta = (AllowPrivateAccess = "true"))
    UMaterial* MaterialBase;

public:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetMID(UItemBase* ItemBase, FIntPoint Size);

private:
    bool RenderTexture();
    int32 GetID(UItemBase* ItemBase);
    void CheckWaitingMIDs();
    FVector2D NormalizeSize(FIntPoint Size);

};
