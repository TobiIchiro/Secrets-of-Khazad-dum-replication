#include "FGKAnimCharacterInformation.h"

FFGKAnimCharacterInformation::FFGKAnimCharacterInformation() {
    this->bIsMoving = false;
    this->bHasMovementInput = false;
    this->Speed = 0.00f;
    this->MovementInputAmount = 0.00f;
    this->AimYawRate = 0.00f;
    this->ZoomAmount = 0.00f;
    this->ViewMode = EFGKViewMode::ThirdPerson;
    this->MovementMode = MOVE_None;
    this->CustomMode = 0;
    this->PrevMovementMode = MOVE_None;
    this->PrevCustomMode = 0;
    this->bAllowFootIK = false;
}

