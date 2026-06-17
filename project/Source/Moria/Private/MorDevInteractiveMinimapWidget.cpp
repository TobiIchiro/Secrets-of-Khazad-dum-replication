#include "MorDevInteractiveMinimapWidget.h"

UMorDevInteractiveMinimapWidget::UMorDevInteractiveMinimapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->MouseWheelLayerDelta = 1;
    this->ZoneLegendWidgetClass = NULL;
    this->BubbleInterfaceLegendWidgetClass = NULL;
    this->WorldLayoutSeedLabel = NULL;
    this->LayerSlider = NULL;
    this->MinLayerLabel = NULL;
    this->MaxLayerLabel = NULL;
    this->CurrentLayerLabel = NULL;
    this->FullZoneFilterCheckBox = NULL;
    this->CurrentAdjacentZoneFilterCheckBox = NULL;
    this->CurrentZoneFilterCheckBox = NULL;
    this->ZonesLegendPanel = NULL;
    this->BubbleInterfacesLegendPanel = NULL;
    this->HoveredCellPanel = NULL;
    this->HoveredCellPositionLabel = NULL;
    this->HoveredCellNameLabel = NULL;
    this->HoveredCellBubbleNameLabel = NULL;
    this->HoveredCellContentsLabel = NULL;
    this->HoveredCellZoneNameLabel = NULL;
    this->ZoomieConfirmWidget = NULL;
    this->MinimapManager = NULL;
    this->MinimapWorldWidget = NULL;
    this->HighlightedZoneLegendWidget = NULL;
}

void UMorDevInteractiveMinimapWidget::OnImmediateZoomieStarted_Implementation() {
}

void UMorDevInteractiveMinimapWidget::HandleOnLayerSliderValueChanged(float NewValue) {
}

void UMorDevInteractiveMinimapWidget::HandleOnFullZoneFilterCheckBoxChanged(bool bIsChecked) {
}

void UMorDevInteractiveMinimapWidget::HandleOnCurrentZoneFilterCheckBoxChanged(bool bIsChecked) {
}

void UMorDevInteractiveMinimapWidget::HandleOnCurrentAdjacentZoneFilterCheckBoxChanged(bool bIsChecked) {
}


float UMorDevInteractiveMinimapWidget::GetCurrentMinimapVisibleLayer() {
    return 0.0f;
}



