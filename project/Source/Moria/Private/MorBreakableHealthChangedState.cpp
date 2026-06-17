#include "MorBreakableHealthChangedState.h"

FMorBreakableHealthChangedState::FMorBreakableHealthChangedState() {
    this->ChangeReason = 0;
    this->NormalizedHealth = 0.00f;
    this->bIsAffectedByBiome = false;
}

