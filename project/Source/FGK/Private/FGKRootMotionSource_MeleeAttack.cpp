#include "FGKRootMotionSource_MeleeAttack.h"

FFGKRootMotionSource_MeleeAttack::FFGKRootMotionSource_MeleeAttack() {
    this->ConnectTime = 0.00f;
    this->ConnectRange = 0.00f;
    this->ConnectOffsetY = 0.00f;
    this->Target = NULL;
    this->Montage = NULL;
    this->PlayRate = 0.00f;
    this->RotationAdjustSpeedLimit = 0.00f;
    this->VelocityAdjustSpeedLimit = 0.00f;
    this->MaxTargetRange = 0.00f;
    this->MaxTargetOffsetZ = 0.00f;
    this->bAllowRootMotionStretch = false;
    this->bStretchOnlyForwardMotion = false;
}

