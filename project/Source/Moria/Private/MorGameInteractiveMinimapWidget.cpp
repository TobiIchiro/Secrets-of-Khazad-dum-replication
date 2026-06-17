#include "MorGameInteractiveMinimapWidget.h"

UMorGameInteractiveMinimapWidget::UMorGameInteractiveMinimapWidget() {
    this->bIsFocusable = true;
    this->MouseWheelDelta = 0.10f;
    this->bZoomInIsInstant = true;
    this->ZoneLegendWidgetClass = NULL;
    this->BubbleInterfaceLegendWidgetClass = NULL;
    this->LayerSlider = NULL;
    this->MinLayerLabel = NULL;
    this->MaxLayerLabel = NULL;
    this->CurrentLayerLabel = NULL;
    this->ZonesLegendPanel = NULL;
    this->MinimapManager = NULL;
    this->MinimapWorldWidget = NULL;
    this->IsoMapWidget = NULL;
    this->HighlightedZoneLegendWidget = NULL;
}


void UMorGameInteractiveMinimapWidget::HandleOnMinimapWorldModelChanged_Implementation() {
}

void UMorGameInteractiveMinimapWidget::HandleOnMainLayerMeshChanged(int32 NewLayer) {
}

void UMorGameInteractiveMinimapWidget::HandleOnLayerSliderValueChanged(float NewValue) {
}




float UMorGameInteractiveMinimapWidget::GetCurrentMinimapVisibleLayer() {
    return 0.0f;
}

void UMorGameInteractiveMinimapWidget::EnableMinimapInput(bool bEnabled) {
}



