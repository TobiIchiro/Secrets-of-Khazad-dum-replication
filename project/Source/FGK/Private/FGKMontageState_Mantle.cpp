#include "FGKMontageState_Mantle.h"
#include "GameFramework/RootMotionSource.h"

UFGKMontageState_Mantle::UFGKMontageState_Mantle() {
    this->bReplicateTarget = true;
    this->bStopAllOtherMontages = false;
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::SetVelocity;
    this->AdjustDeltaTimeMin = 0.03f;
    this->AdjustDeltaTimeMax = 0.10f;
    this->PaddingZ = 2.00f;
    this->bChangeCapsuleSize = false;
    this->CapsuleScaleHeight = 0.50f;
    this->CapsuleScaleRadius = 0.50f;
}


