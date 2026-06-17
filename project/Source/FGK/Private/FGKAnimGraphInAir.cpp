#include "FGKAnimGraphInAir.h"

FFGKAnimGraphInAir::FFGKAnimGraphInAir() {
    this->bJumped = false;
    this->bJumpStarted = false;
    this->bSecondJumpStarted = false;
    this->bThirdJumpStarted = false;
    this->bAscending = false;
    this->bDescending = false;
    this->JumpCount = 0;
    this->JumpPlayRate = 0.00f;
    this->HorizontalSpeed = 0.00f;
    this->FallSpeed = 0.00f;
    this->LandPrediction = 0.00f;
}

