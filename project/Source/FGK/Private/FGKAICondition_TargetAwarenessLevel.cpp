#include "FGKAICondition_TargetAwarenessLevel.h"

UFGKAICondition_TargetAwarenessLevel::UFGKAICondition_TargetAwarenessLevel() {
    this->AwarenessLevelToCheck = EFGKAIAwarenessLevel::Full;
    this->TeamAttitude = ETeamAttitude::Hostile;
}


