#include "FGKSlidingState.h"

UFGKSlidingState::UFGKSlidingState() {
    this->MinSlideSpeed = 600.00f;
    this->HitStartTime = 0.00f;
    this->MaxSlideLoopTime = 999.00f;
    this->MaxSpeedScalar = 2.00f;
    this->DownhillFactorScalar = 2.00f;
    this->DownhillFactorIncreasement = 0.25f;
    this->DownhillFactorIntercept = 0.00f;
    this->bHasAttack = false;
}


