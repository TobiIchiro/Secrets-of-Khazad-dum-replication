#include "DebugPlotter.h"

UDebugPlotter::UDebugPlotter() {
    this->Game = NULL;
    this->CurrentHUD = NULL;
    this->PlotterFont = NULL;
}

void UDebugPlotter::ToggleDrawingEnabled() {
}

void UDebugPlotter::SetDrawingEnabled(bool bEnabled) {
}

bool UDebugPlotter::SetDrawingCategory(FName Category) {
    return false;
}

bool UDebugPlotter::RegisterPlot(const FString& PlotName, FName PlotCategory, FColor Color, float MinInterval, int32 MaxSamples) {
    return false;
}

bool UDebugPlotter::RegisterFixedPlot(const FString& PlotName, FName PlotCategory, float MinValue, float MaxValue, FColor Color, float MinInterval, int32 MaxSamples) {
    return false;
}

void UDebugPlotter::OnHUDPostRender(AHUD* HUD, UCanvas* DebugCanvas) {
}

bool UDebugPlotter::IsDrawingPossible() const {
    return false;
}

bool UDebugPlotter::IsDrawingEnabled() const {
    return false;
}

bool UDebugPlotter::IsDrawingCategory(FName Category) const {
    return false;
}

bool UDebugPlotter::IsDrawing(FName Category) {
    return false;
}

UDebugPlotter* UDebugPlotter::Get(UGameInstance* GameInstance) {
    return NULL;
}

void UDebugPlotter::CycleDrawingCategory() {
}

bool UDebugPlotter::ClearPlot(const FString& PlotName) {
    return false;
}

bool UDebugPlotter::AddSample(const FString& PlotName, float Value) {
    return false;
}


