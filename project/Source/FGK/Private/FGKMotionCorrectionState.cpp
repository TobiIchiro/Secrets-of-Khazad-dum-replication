#include "FGKMotionCorrectionState.h"

UFGKMotionCorrectionState::UFGKMotionCorrectionState() {
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->RootMotionSourceID = 0;
    this->bCanPopDisableRootMotion = false;
    this->bMotionCorrectionUnderway = false;
}


