#include "FGKNatAnimTwoBonesProps.h"

FFGKNatAnimTwoBonesProps::FFGKNatAnimTwoBonesProps() {
    this->bMiddleBoneMoveDirection = false;
    this->MinMiddleBoneDisplacementThreshold = 0.00f;
    this->MaxMiddleBoneDisplacementThreshold = 0.00f;
    this->bControlBoneStretching = false;
    this->MaxBoneStretchingPct = 0.00f;
    this->bKeepEndBoneRotation = false;
}

