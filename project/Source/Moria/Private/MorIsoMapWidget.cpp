#include "MorIsoMapWidget.h"

UMorIsoMapWidget::UMorIsoMapWidget() {
    this->MinimapView = NULL;
    this->TuningData = NULL;
    this->bAutoFocusOnPlayer = false;
    this->bAutoFocusOnPlayerCell = false;
    this->WaypointsManager = NULL;
}

bool UMorIsoMapWidget::Debug_UseIsoMap() {
    return false;
}


