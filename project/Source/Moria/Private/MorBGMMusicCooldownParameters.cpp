#include "MorBGMMusicCooldownParameters.h"

FMorBGMMusicCooldownParameters::FMorBGMMusicCooldownParameters() {
    this->CooldownMin = 0.00f;
    this->CooldownMax = 0.00f;
    this->FirstTimeMin = 0.00f;
    this->FirstTimeMax = 0.00f;
    this->DebounceTime = 0.00f;
    this->bShouldResetOnMusicTypeChange = false;
    this->CurrentCooldownAmount = 0.00f;
    this->CurrentCooldownTimer = 0.00f;
}

