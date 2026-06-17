#include "FGKActionEffect_Move.h"
#include "FGKBaseCharacter.h"

UFGKActionEffect_Move::UFGKActionEffect_Move() {
    this->OwnerClass = AFGKBaseCharacter::StaticClass();
    this->bMoveToTarget = false;
    this->bCancelMoveIfNoTarget = true;
    this->bFollowTarget = false;
    this->bAddTargetRadius = false;
    this->bDestinationFromTargetFacing = false;
    this->bAlignWithTargetFloor = true;
    this->bScaleTimeBasedOnDistance = false;
    this->bApplyAddSpeedToDistance = false;
    this->bKeepRootMotionDisabledAfter = true;
    this->Duration = 0.00f;
    this->TravelSpeed = 0.00f;
    this->AddSpeed = 0.00f;
    this->AmountOfSidewaysVelocityToConsider = 1.00f;
    this->FinalClampVelocity = 0.00f;
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::ClampVelocity;
    this->TimeMappingCurve = NULL;
    this->PathOffsetCurve = NULL;
}


