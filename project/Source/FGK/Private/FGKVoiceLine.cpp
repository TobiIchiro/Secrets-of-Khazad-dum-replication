#include "FGKVoiceLine.h"

FFGKVoiceLine::FFGKVoiceLine() {
    this->AkEvent = NULL;
    this->Chance = 0.00f;
    this->Cooldown = 0.00f;
    this->bUseGlobalCooldown = false;
    this->Priority = 0.00f;
}

