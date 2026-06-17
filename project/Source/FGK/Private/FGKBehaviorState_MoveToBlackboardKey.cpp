#include "FGKBehaviorState_MoveToBlackboardKey.h"

UFGKBehaviorState_MoveToBlackboardKey::UFGKBehaviorState_MoveToBlackboardKey() {
    this->bShouldTrackMovingDestination = false;
    this->BlackboardComponent = NULL;
    this->SpawnedGoalActor = NULL;
}


