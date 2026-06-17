#include "MorCharacterState_WalkToStation.h"

UMorCharacterState_WalkToStation::UMorCharacterState_WalkToStation() {
    this->InputFactorMin = 0.25f;
    this->ScaleDownInputWithinRange = 150.00f;
    this->AbortTimeLimit = 3.00f;
    this->GoodEnoughRange = 5.00f;
    this->bShouldUseAimingRotation = true;
    this->GoodEnoughAngle = 10.00f;
    this->bForceCharacterInput = false;
    this->bSnapToGoalAtEnd = false;
}


