#include "MorSubcellMarker.h"

AMorSubcellMarker::AMorSubcellMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->UsageCategory = EMorSubcellUsageCategory::FullyNavigable;
    this->bElevatorSymbolAllowed = false;
}


