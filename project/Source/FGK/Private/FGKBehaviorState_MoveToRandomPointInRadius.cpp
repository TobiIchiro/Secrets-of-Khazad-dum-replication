#include "FGKBehaviorState_MoveToRandomPointInRadius.h"

UFGKBehaviorState_MoveToRandomPointInRadius::UFGKBehaviorState_MoveToRandomPointInRadius() {
    this->Radius = 500.00f;
    this->RotationMode = EFGKRotationMode::VelocityDirection;
    this->Gait = EFGKGait::Running;
    this->PreviousGait = EFGKGait::Walking;
}


