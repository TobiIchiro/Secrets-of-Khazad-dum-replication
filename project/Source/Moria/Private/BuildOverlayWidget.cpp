#include "BuildOverlayWidget.h"

UBuildOverlayWidget::UBuildOverlayWidget() {
    this->BuildingComponent = NULL;
}

void UBuildOverlayWidget::ToggleBuildCamera() {
}

void UBuildOverlayWidget::SetConstructionValidity_Implementation(EConstructionValidity Validity) {
}

void UBuildOverlayWidget::SelectRecipeIndex_Implementation(int32 Index) {
}

void UBuildOverlayWidget::SelectRecipe(const FMorConstructionRecipeRowHandle& RecipeHandle) {
}

void UBuildOverlayWidget::Rotate(bool bCounterClockwise) {
}

void UBuildOverlayWidget::ResetPushPull() {
}

void UBuildOverlayWidget::RequestDeconstruct() {
}

void UBuildOverlayWidget::OnRotationChanged(float NewRotation) {
}

void UBuildOverlayWidget::OnPushPullOffsetChanged(const FVector& NewOffset) {
}

void UBuildOverlayWidget::IncrementPushPull(const FVector& Delta) {
}

FMorConstructionRecipeRowHandle UBuildOverlayWidget::GetSelectedRecipeHandle() const {
    return FMorConstructionRecipeRowHandle{};
}

EBuildProcess UBuildOverlayWidget::GetProcess_Implementation() const {
    return EBuildProcess::Instant;
}

EConstructionPlacementMode UBuildOverlayWidget::GetPlacementMode_Implementation() const {
    return EConstructionPlacementMode::Standard;
}

FMorConstructionRecipeRowHandle UBuildOverlayWidget::GetFixedRecipe() {
    return FMorConstructionRecipeRowHandle{};
}

void UBuildOverlayWidget::BuildConstruction() {
}


