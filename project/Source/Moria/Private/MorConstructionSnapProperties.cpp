#include "MorConstructionSnapProperties.h"

FMorConstructionSnapProperties::FMorConstructionSnapProperties() {
    this->SnapRule = ESnapPointPlacement::Even;
    this->bEnableTop = false;
    this->bEnableBottom = false;
    this->bEnableLeft = false;
    this->bEnableRight = false;
    this->bEnableFront = false;
    this->bEnableBack = false;
    this->bCustomGridSize = false;
}

