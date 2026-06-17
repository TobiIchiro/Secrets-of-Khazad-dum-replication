#include "MorGameMinimapWidget.h"

UMorGameMinimapWidget::UMorGameMinimapWidget() {
    this->bAutoFocusOnPlayer = false;
    this->bAutoFocusOnPlayerCell = false;
    this->StartingZoom = 0.00f;
    this->MinimapWorld = NULL;
    this->MaxZoomCellSizeView = 22;
    this->bUsePawnRotationInsteadOfCameraRotationForArrow = false;
    this->bIsFullMap = true;
}

void UMorGameMinimapWidget::UpdateStartingDiscoveredZones(const TArray<FMorZoneRowHandle>& StartingDiscoveredZones) {
}

void UMorGameMinimapWidget::UpdateFogOfWar_Implementation(const FGuid& PlayerGuid, UWorldLayoutBubble* Bubble) {
}


void UMorGameMinimapWidget::OnFinishedSetup_Implementation() {
}

bool UMorGameMinimapWidget::IsGivenCellCoordinateVisible(const FIntVector CellPosition) {
    return false;
}

void UMorGameMinimapWidget::FocusMapTransformOnWorldLocation(const FVector& WorldLocation, AWorldLayout* WorldLayout, float Zoom, bool bImmediate) {
}

void UMorGameMinimapWidget::FocusMapLayerOnPlayer(bool bImmediate) {
}

void UMorGameMinimapWidget::DiscoverAllChapters() {
}


