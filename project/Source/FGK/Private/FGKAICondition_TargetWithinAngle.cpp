#include "FGKAICondition_TargetWithinAngle.h"

UFGKAICondition_TargetWithinAngle::UFGKAICondition_TargetWithinAngle() {
    this->TeamAttitude = ETeamAttitude::Hostile;
    this->Angle = 90.00f;
    this->DirectionType = EDirectionType::Forward;
}


