#include "MainHUD.h"
#include "MainController.h"
#include "CanvasItem.h"
#include "Engine/Canvas.h"
#include "Unit.h"

void AMainHUD::DrawHUD()
{
    Super::DrawHUD();
    if (!MainController)
        return;
    if (MainController->bIsSelecting)
    {
        const FVector2D SelectionStart = MainController->SelectionStart;
        const FVector2D SelectionEnd = MainController->SelectionEnd;
        const float StartX = SelectionStart.X;
        const float StartY = SelectionStart.Y;
        const float EndX = SelectionEnd.X;
        const float EndY = SelectionEnd.Y;
        this->DrawRect(FLinearColor(0.f, 1.f, 1.f, 0.1f), StartX, StartY, EndX - StartX, EndY - StartY);
        const auto LinerColor = FLinearColor(0.f, 1.f, 1.f, 1.f);
        this->DrawLine(StartX, StartY, StartX, EndY, LinerColor, 1.f);
        this->DrawLine(StartX, StartY, EndX, StartY, LinerColor, 1.f);
        this->DrawLine(EndX, EndY, EndX, StartY, LinerColor, 1.f);
        this->DrawLine(EndX, EndY, StartX, EndY, LinerColor, 1.f);

        TArray<AUnit*> SelectedUnits;
        GetActorsInSelectionRectangle<AUnit>(SelectionStart, SelectionEnd, SelectedUnits, false, false);
        MainController->NewSelectedUnits = TSet<AUnit*>(SelectedUnits);
    }
}

void AMainHUD::BeginPlay()
{
    Super::BeginPlay();
    MainController = Cast<AMainController>(GetWorld()->GetFirstPlayerController());
}