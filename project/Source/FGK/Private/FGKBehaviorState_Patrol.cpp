#include "FGKBehaviorState_Patrol.h"

UFGKBehaviorState_Patrol::UFGKBehaviorState_Patrol() {
    this->bEndWhenReachPatrolPoint = false;
    this->bEndWhenReachOccupiablePatrolPoint = false;
    this->bGoToNextIfAlreadyAtPatrolPoint = true;
    this->AcceptanceRadius = 50.00f;
    this->PatrolComponent = NULL;
}


