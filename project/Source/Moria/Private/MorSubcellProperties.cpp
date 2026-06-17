#include "MorSubcellProperties.h"

FMorSubcellProperties::FMorSubcellProperties() {
    this->bValidFloorLocation = false;
    this->UsageCategory = EMorSubcellUsageCategory::FullyNavigable;
    this->bElevatorSymbolAllowed = false;
}

