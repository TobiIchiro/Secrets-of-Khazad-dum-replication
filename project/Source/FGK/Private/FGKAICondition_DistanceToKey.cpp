#include "FGKAICondition_DistanceToKey.h"

UFGKAICondition_DistanceToKey::UFGKAICondition_DistanceToKey() {
    this->DistanceToCheck = 1000.00f;
    this->DistanceCheckType = EFGKAIDistanceCheck::LessThan;
}


