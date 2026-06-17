#include "FGKActionEffect_VelocityMove.h"
#include "FGKBaseCharacter.h"

UFGKActionEffect_VelocityMove::UFGKActionEffect_VelocityMove() {
    this->OwnerClass = AFGKBaseCharacter::StaticClass();
    this->Duration = 0.00f;
    this->FinalVelocityMode = EVelocityMoveFinalSpeed::Absolute;
    this->FinalMinVelocity = 0.00f;
    this->bMoveToTarget = false;
    this->bFollowTarget = false;
    this->bScaleTimeBasedOnDistance = false;
    this->bClampVelocityOnEarlyExit = false;
    this->bClampVelocityAtEnd = false;
    this->EarlyExitSpeed = 0.00f;
    this->EndSpeed = 0.00f;
    this->TimeMappingCurve = NULL;
    this->PathOffsetCurve = NULL;
}


