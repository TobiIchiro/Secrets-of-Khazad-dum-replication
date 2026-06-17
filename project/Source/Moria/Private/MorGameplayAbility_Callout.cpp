#include "MorGameplayAbility_Callout.h"

UMorGameplayAbility_Callout::UMorGameplayAbility_Callout() {
    this->CalloutPOI = NULL;
    this->DefaultIconType = ECalloutIconType::Generic;
    this->MinDistanceToBeConsideredFar = 500;
}


