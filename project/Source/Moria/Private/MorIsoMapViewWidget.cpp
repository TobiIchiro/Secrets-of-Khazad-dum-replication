#include "MorIsoMapViewWidget.h"

UMorIsoMapViewWidget::UMorIsoMapViewWidget() {
    this->bEnabledMouseEvents = true;
}

void UMorIsoMapViewWidget::SetTargetZoomToDefaultStep() {
}

void UMorIsoMapViewWidget::SetTargetZoomSteps(int32 ZoomSteps, float ZoomMin, float ZoomMax) {
}

void UMorIsoMapViewWidget::SetTargetZoomExpDelta(float ZoomDelta, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::SetTargetZoom(float NewZoom, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::SetTargetPan(const FVector2D& NewPan, EMorIsoMapPanSpace PanSpace, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::SetTargetLayer(int32 NewLayer, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::SetPivot(const FMorIsoMapPivot& NewPivot, bool bResetOnFinishedTransitions) {
}

void UMorIsoMapViewWidget::SetMouseEventsEnabled(bool bEnable) {
}

void UMorIsoMapViewWidget::SetMarkerFocused(FMorIsoMapMarkerId MarkerId, bool bFocusOnCell) {
}

void UMorIsoMapViewWidget::SetMapConfig(const FMorIsoMapConfig& NewMapConfig, bool bUpdateView) {
}

void UMorIsoMapViewWidget::SetDefaultPivot(const FMorIsoMapPivot& DefaultPivot) {
}

void UMorIsoMapViewWidget::SetCursorPivot(const FMorIsoMapPivot& NewCursorPivot) {
}

void UMorIsoMapViewWidget::SetCurrentChapter(int32 NewChapterId, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::ResetPivot() {
}

void UMorIsoMapViewWidget::ResetCurrentChapter(EMorIsoMapViewValueChange Change) {
}

bool UMorIsoMapViewWidget::IsWaypointInCurrentChapter(const FMorWaypointData& WaypointData) const {
    return false;
}

float UMorIsoMapViewWidget::GetTargetZoom() const {
    return 0.0f;
}

APlayerState* UMorIsoMapViewWidget::GetPlayerFromMarker(FMorIsoMapMarkerId PlayerMarkerId) const {
    return NULL;
}

bool UMorIsoMapViewWidget::GetNeighborHoveredMarker(const FMorIsoMapMarkerId& FromMarkerId, int32 Offset, EMorIsoMapMarkerType FilteredType, FMorIsoMapMarkerId& OutMarkerId, FVector& OutCellPosition) const {
    return false;
}

bool UMorIsoMapViewWidget::GetMarkerCellPosition(FMorIsoMapMarkerId MarkerId, FVector& OutCellPosition) const {
    return false;
}

bool UMorIsoMapViewWidget::GetLocalPlayerCellPosition(FVector& OutCellPosition) const {
    return false;
}

bool UMorIsoMapViewWidget::GetLayerRange(int32& OutMinLayer, int32& OutMaxLayer) const {
    return false;
}

FVector UMorIsoMapViewWidget::GetHoveredCell(bool& bOutIsFallbackPan) const {
    return FVector{};
}

FMorIsoMapMarkerId UMorIsoMapViewWidget::GetFocusedMarker() const {
    return FMorIsoMapMarkerId{};
}

float UMorIsoMapViewWidget::GetCurrentZoom() const {
    return 0.0f;
}

FMorIsoMapPivot UMorIsoMapViewWidget::GetCurrentPivot() const {
    return FMorIsoMapPivot{};
}

FVector2D UMorIsoMapViewWidget::GetCurrentPan(EMorIsoMapPanSpace PanSpace) const {
    return FVector2D{};
}

int32 UMorIsoMapViewWidget::GetCurrentLayer() const {
    return 0;
}

FMorIsoMapPivot UMorIsoMapViewWidget::GetCurrentCursorPivot(bool& bOutIsFallbackPan) const {
    return FMorIsoMapPivot{};
}

int32 UMorIsoMapViewWidget::GetCurrentChapterId(bool& bOutIsSet) const {
    return 0;
}

void UMorIsoMapViewWidget::FocusOnWorldPosition(const FVector& WorldPosition, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::FocusOnCell(const FVector& CellCoords, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change) {
}

void UMorIsoMapViewWidget::ClearFocusedMarker() {
}


