#include "FGKAIPatrolPoint.h"

AFGKAIPatrolPoint::AFGKAIPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxNumOccupyingAgents = 0;
    this->InsertBehaviorFSMClass = NULL;
    this->OverrideBehaviorFSMClass = NULL;
}


