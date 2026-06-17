#include "MorTipDefinition.h"

FMorTipDefinition::FMorTipDefinition() {
    this->TipImage = NULL;
    this->TipDuration = 0.00f;
    this->bSilentUnlock = false;
    this->bGlobalUnlock = false;
    this->AcceptableGameModes = EMorGameModeFlags::None;
}

