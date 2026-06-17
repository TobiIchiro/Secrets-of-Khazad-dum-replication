#include "MorHintButtonData.h"

FMorHintButtonData::FMorHintButtonData() {
    this->ButtonType = EMorButtonsTypes::Default;
    this->bClickable = false;
    this->HintVisibility = ESlateVisibility::Visible;
}

