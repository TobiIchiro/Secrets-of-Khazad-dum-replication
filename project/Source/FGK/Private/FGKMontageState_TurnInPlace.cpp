#include "FGKMontageState_TurnInPlace.h"

UFGKMontageState_TurnInPlace::UFGKMontageState_TurnInPlace() {
    this->bCrouching = false;
    this->TurnType = EFGKTurnInPlaceType::Left_90;
    this->AimPredictionTime = 0.00f;
    this->MaxYawFromAim = 180.00f;
    this->bOnlyConstrainYawWhileAiming = true;
    this->RootMotionSourceID = 0;
}


