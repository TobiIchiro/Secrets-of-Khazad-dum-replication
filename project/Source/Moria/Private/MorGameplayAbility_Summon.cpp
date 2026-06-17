#include "MorGameplayAbility_Summon.h"

UMorGameplayAbility_Summon::UMorGameplayAbility_Summon() {
    this->bAllowActivationWithoutAnim = true;
    this->bSubscribeToAnimNotifies = true;
    this->EncounterSettings = NULL;
    this->DontSummonIfMoreThanThisNumberAliveStill = 0;
}


