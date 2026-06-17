#include "MorWorldModelZoneWidget.h"

UMorWorldModelZoneWidget::UMorWorldModelZoneWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bSetZoneColorToNameLabel = true;
    this->bUseDevName = false;
    this->ZoneNameLabel = NULL;
}



