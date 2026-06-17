#include "FGKAICondition_AtPatrolPoint.h"

UFGKAICondition_AtPatrolPoint::UFGKAICondition_AtPatrolPoint() {
    this->PatrolComponent = NULL;
    this->bOccupied = false;
    this->Distance = 50.00f;
}


