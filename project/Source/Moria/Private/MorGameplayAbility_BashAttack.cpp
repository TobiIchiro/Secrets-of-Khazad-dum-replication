#include "MorGameplayAbility_BashAttack.h"

UMorGameplayAbility_BashAttack::UMorGameplayAbility_BashAttack() {
    this->HitSettings.AddDefaulted(1);
    this->bForceAimRotation = true;
    this->bAllowReturningToBlockWhenItemDoesNotMatch = false;
}


