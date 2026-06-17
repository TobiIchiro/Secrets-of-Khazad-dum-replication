#include "MotionCorrectionWindowParams.h"

FMotionCorrectionWindowParams::FMotionCorrectionWindowParams() {
    this->bDisableMotionCorrection = false;
    this->Type = EFGKMotionCorrectionType::None;
    this->bOffsetSocket = false;
    this->VelocityAdjustSpeedLimit = 0.00f;
    this->RotationAdjustSpeedLimit = 0.00f;
    this->RotationModifier = NULL;
}

