#include "MorActiveEffectUIInfo.h"

UMorActiveEffectUIInfo::UMorActiveEffectUIInfo() {
    this->UIData = NULL;
    this->EffectInstigator = NULL;
    this->Effect = NULL;
    this->bHasDuration = false;
    this->TimeRemaining = 0.00f;
    this->Duration = 0.00f;
    this->Stacks = 0;
    this->bIsInhibited = false;
}

bool UMorActiveEffectUIInfo::ShouldDisplay() const {
    return false;
}

bool UMorActiveEffectUIInfo::HasDuration() const {
    return false;
}

float UMorActiveEffectUIInfo::GetCustomProgressPercentage() const {
    return 0.0f;
}


