#include "MorPerformTraceResults.h"

FMorPerformTraceResults::FMorPerformTraceResults() {
    this->StabilityEstimate = 0.00f;
    this->HitType = ETraceHitType::Invalid;
    this->Validity = EConstructionValidity::Valid;
    this->bBlockedByOverlappingStructures = false;
    this->bBuildAsFoundation = false;
}

