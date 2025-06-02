#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

class ARepresentedUnitBase;
class AMainController;

UCLASS()
class UMV_API AMainHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void DrawHUD() override;

protected:
    virtual void BeginPlay() override;

private:
    
    UPROPERTY()
    AMainController* MainController;

};