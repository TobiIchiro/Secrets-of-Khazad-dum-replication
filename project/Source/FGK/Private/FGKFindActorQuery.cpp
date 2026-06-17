#include "FGKFindActorQuery.h"

FFGKFindActorQuery::FFGKFindActorQuery() {
    this->ActorClass = NULL;
    this->DistanceType = EFGKDistanceType::THREE_DIMENSIONAL;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->MinDot = 0.00f;
    this->MaxDot = 0.00f;
}

