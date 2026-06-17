#include "MorAnimNode_LipSync.h"

FMorAnimNode_LipSync::FMorAnimNode_LipSync() {
    this->LODThreshold = 0;
    this->bFilterBlend_MeshSpaceRotationBlend = false;
    this->bFilterBlend_MeshSpaceScaleBlend = false;
    this->FilterBlend_CurveBlendOption = ECurveBlendOption::Override;
    this->bFilterBlend_BlendRootMotionBasedOnRootBone = false;
    this->LipSyncVoiceAlpha = 0.00f;
}

