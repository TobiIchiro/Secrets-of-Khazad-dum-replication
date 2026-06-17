#include "ThresholdEffectStruct.h"

FThresholdEffectStruct::FThresholdEffectStruct() {
    this->FilledPercentage = 0.00f;
    this->bMaxReached = false;
    this->LastTimeUpdatedAscending = 0.00f;
    this->LastTimeUpdatedDescending = 0.00f;
}

