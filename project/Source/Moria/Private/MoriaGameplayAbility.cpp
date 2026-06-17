#include "MoriaGameplayAbility.h"

UMoriaGameplayAbility::UMoriaGameplayAbility() {
    this->bDisplayAsHold = false;
    this->SelfEffect = NULL;
    this->bActivateOnGrant = false;
    this->bAllowReactivationForItemActions = false;
    this->ItemCost = 0;
    this->bCanUseWithNoEnergy = false;
}


