#include "FGKRootMotionSource_MotionCorrection.h"

FFGKRootMotionSource_MotionCorrection::FFGKRootMotionSource_MotionCorrection() {
    this->bIgnoreRotation = false;
    this->TargetSpeed = 0.00f;
    this->Montage = NULL;
    this->PlayRate = 0.00f;
}

