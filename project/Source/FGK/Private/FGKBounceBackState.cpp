#include "FGKBounceBackState.h"

UFGKBounceBackState::UFGKBounceBackState() {
    this->bAcceptMoveInput = false;
    this->bSnapMoveInputToDirection = true;
    this->BounceTime = 1.50f;
    this->DodgeTime = 0.00f;
    this->ComboTime = 0.10f;
    this->BounceHeight = 200.00f;
    this->BounceDistance = 600.00f;
    this->RotateTowardsMoveInputSpeedMax = 180.00f;
    this->EarlyExitsAtComboTime = 0;
}


