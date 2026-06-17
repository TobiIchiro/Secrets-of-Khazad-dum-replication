#include "MorThresholdEffectDefinition.h"

FMorThresholdEffectDefinition::FMorThresholdEffectDefinition() {
    this->ThresholdTime = 0.00f;
    this->IncreaseProgressDelay = 0.00f;
    this->DecreaseProgressDelay = 0.00f;
    this->bResetOnRespawn = false;
    this->MaxoutEffect = NULL;
    this->MaxOutEffectStartFraction = 0.00f;
    this->ResetOnMaxout = false;
    this->InBoundsEffect = NULL;
    this->ThresholdAttributeValue_LowerBound = 0.00f;
    this->ThresholdAttributeValue_UpperBound = 0.00f;
    this->bInvertThresholdDirection = false;
}

