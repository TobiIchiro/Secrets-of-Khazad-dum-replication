#include "FGKAICondition_TargetWithinRange.h"

UFGKAICondition_TargetWithinRange::UFGKAICondition_TargetWithinRange() {
    this->TargetRangeType = ETargetRangeType::NoLimit;
    this->CustomDistanceType = EFGKDistanceType::THREE_DIMENSIONAL;
    this->CustomDistance = 5000.00f;
}


