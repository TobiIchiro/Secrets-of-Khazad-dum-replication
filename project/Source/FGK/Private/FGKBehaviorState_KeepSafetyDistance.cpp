#include "FGKBehaviorState_KeepSafetyDistance.h"

UFGKBehaviorState_KeepSafetyDistance::UFGKBehaviorState_KeepSafetyDistance() {
    this->TeamAttitude = ETeamAttitude::Hostile;
    this->DefaultRotationMode = EFGKRotationMode::VelocityDirection;
}


