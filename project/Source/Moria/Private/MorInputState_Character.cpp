#include "MorInputState_Character.h"

UMorInputState_Character::UMorInputState_Character() {
    this->MouseDeadZone = 0.00f;
    this->StickDeadZone = 0.15f;
    this->StickWalkRunThreshold = 0.95f;
    this->bMKB_WalkIsToggle = false;
    this->bMKB_CrouchIsToggle = true;
    this->bGamepad_WalkIsToggle = true;
    this->bGamepad_CrouchIsToggle = true;
    this->LookUpDownRate = 1.25f;
    this->LookLeftRightRate = 1.25f;
    this->TapMaxTime = 0.30f;
}


