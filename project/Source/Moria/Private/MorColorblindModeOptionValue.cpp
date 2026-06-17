#include "MorColorblindModeOptionValue.h"

FMorColorblindModeOptionValue::FMorColorblindModeOptionValue() {
    this->Type = EColorVisionDeficiency::NormalVision;
    this->Severity = 0.00f;
    this->bCorrectDeficiency = false;
}

