#include "FGKCharacterControlSettings.h"

UFGKCharacterControlSettings::UFGKCharacterControlSettings() {
    this->FollowAskRange = 3000.00f;
    this->LookUpDownRate = 1.25f;
    this->LookLeftRightRate = 1.25f;
    this->RollDoubleTapTimeout = 0.30f;
    this->ThirdPersonFOV = 90.00f;
    this->FirstPersonFOV = 90.00f;
    this->CharacterSwitch = NULL;
}


