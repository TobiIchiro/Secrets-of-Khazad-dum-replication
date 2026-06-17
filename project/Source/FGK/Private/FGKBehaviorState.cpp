#include "FGKBehaviorState.h"

UFGKBehaviorState::UFGKBehaviorState() {
    this->RequiredChildType = UFGKBehaviorState::StaticClass();
    this->Controller = NULL;
    this->Character = NULL;
    this->MoveComp = NULL;
    this->AITargetingComponent = NULL;
    this->SenseConfigsOverride = NULL;
    this->bLookAtTarget = false;
}

void UFGKBehaviorState::RefreshPawn() {
}


