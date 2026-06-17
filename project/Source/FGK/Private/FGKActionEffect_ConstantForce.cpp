#include "FGKActionEffect_ConstantForce.h"
#include "FGKBaseCharacter.h"

UFGKActionEffect_ConstantForce::UFGKActionEffect_ConstantForce() {
    this->OwnerClass = AFGKBaseCharacter::StaticClass();
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->FinalClampVelocity = 0.00f;
    this->bSetVelocityUsingFinalSetVelocity = false;
    this->bSetVelocityMuteZ = false;
    this->bSetVelocityMuteXY = false;
}


