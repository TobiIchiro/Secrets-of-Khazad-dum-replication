#include "MorIsoMapLayerSwitcherWidget.h"

UMorIsoMapLayerSwitcherWidget::UMorIsoMapLayerSwitcherWidget() {
    this->PipClass = NULL;
    this->MapViewWidget = NULL;
    this->CurrentLayer = 0;
    this->CurrentLayerFloat = 0.00f;
}






float UMorIsoMapLayerSwitcherWidget::NormalizeLayer(float Layer) const {
    return 0.0f;
}

void UMorIsoMapLayerSwitcherWidget::InitializeLayerSwitcher(UMorIsoMapViewWidget* InMapViewWidget) {
}

void UMorIsoMapLayerSwitcherWidget::HandleOnLayerGoalsChanged() {
}

void UMorIsoMapLayerSwitcherWidget::HandleOnLayerChanged(int32 NewLayer) {
}

void UMorIsoMapLayerSwitcherWidget::HandleOnChapterChanged(int32 NewChapterId, bool bIsValid) {
}

void UMorIsoMapLayerSwitcherWidget::DeinitializeLayerSwitcher() {
}


