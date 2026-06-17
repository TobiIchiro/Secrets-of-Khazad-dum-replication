#include "MorGameMinimapWorldWidget.h"

UMorGameMinimapWorldWidget::UMorGameMinimapWorldWidget() {
    this->LayerTransitionSpeed = 10.00f;
    this->bEnabledInputControls = false;
    this->MaxZoomCellViewSize = 5;
    this->MouseMovePanSpeed = 1.00f;
    this->PanSpeed = 1.00f;
    this->ZoomRecenterPercentage = 0.50f;
    this->ZoomPanRestrictionMultiplier = 0.80f;
    this->ZoomSpeed = 1.00f;
    this->X_PAN_OFFSET = 0.00f;
    this->Y_PAN_OFFSET = 0.00f;
    this->WorldLayout = NULL;
}

void UMorGameMinimapWorldWidget::WaypointClicked(FMorWaypointData WaypointData) {
}

void UMorGameMinimapWorldWidget::SetZoom(float Value, bool bImmediate) {
}

void UMorGameMinimapWorldWidget::SetVisibleLayer(int32 Value, bool bImmediate) {
}

void UMorGameMinimapWorldWidget::SetShouldIconsRotate(bool bEnabled) {
}

void UMorGameMinimapWorldWidget::SetLayerBehavior(EMorGameMinimapLayerBehavior LayerBehavior) {
}

void UMorGameMinimapWorldWidget::RefreshCurrentChapter() {
}

bool UMorGameMinimapWorldWidget::IsPositionSecret(const FVector& Location) const {
    return false;
}

bool UMorGameMinimapWorldWidget::IsPositionInChapter(const FVector& Location, int32 ChapterId) const {
    return false;
}

bool UMorGameMinimapWorldWidget::IsCellSecret(const FIntVector& CellPosition) const {
    return false;
}

float UMorGameMinimapWorldWidget::GetZoom() {
    return 0.0f;
}

int32 UMorGameMinimapWorldWidget::GetTargetVisibleLayer() const {
    return 0;
}

int32 UMorGameMinimapWorldWidget::GetPlayerLayer() const {
    return 0;
}

void UMorGameMinimapWorldWidget::GetMapPanningValue(FIntVector& MinCell, FIntVector& MaxCell, bool bVisibleOnly) {
}

int32 UMorGameMinimapWorldWidget::GetLayerForPosition(const FVector& Location) const {
    return 0;
}

EMorGameMinimapLayerBehavior UMorGameMinimapWorldWidget::GetLayerBehavior() const {
    return EMorGameMinimapLayerBehavior::Default;
}

TArray<int32> UMorGameMinimapWorldWidget::GetDiscoveredChapters(AMoriaPlayerState* PlayerState) const {
    return TArray<int32>();
}

float UMorGameMinimapWorldWidget::GetCurrentVisibleLayer() const {
    return 0.0f;
}

int32 UMorGameMinimapWorldWidget::GetCurrentChapterNumber() {
    return 0;
}

FText UMorGameMinimapWorldWidget::GetCurrentChapterName() {
    return FText::GetEmpty();
}

int32 UMorGameMinimapWorldWidget::GetChapterForLocation(const FVector& Location) const {
    return 0;
}

void UMorGameMinimapWorldWidget::FinishedSetup(UMorMinimapRootIconWidget* RootIconWidget, AWorldLayout* NewWorldLayout) {
}

void UMorGameMinimapWorldWidget::AdvanceToSpecificChapter(int32 ChapterId) {
}

void UMorGameMinimapWorldWidget::AdvanceToPreviousChapterFilter() {
}

void UMorGameMinimapWorldWidget::AdvanceToNextChapterFilter() {
}


