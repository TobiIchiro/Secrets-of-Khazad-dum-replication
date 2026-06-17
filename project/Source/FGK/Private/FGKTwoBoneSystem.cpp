#include "FGKTwoBoneSystem.h"

FFGKTwoBoneSystem::FFGKTwoBoneSystem() {
    this->bKeepEndBoneRotation = false;
    this->bMiddleBoneMoveDirection = false;
    this->bPerformAdditionalMiddleBoneFixes = false;
    this->bControlBoneStretching = false;
    this->MaxBoneStretchingPct = 0.00f;
}

