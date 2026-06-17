#include "FGKBehaviorState_MoveTo.h"

UFGKBehaviorState_MoveTo::UFGKBehaviorState_MoveTo() {
    this->AcceptanceRadius = 100.00f;
    this->bShouldProjectGoalWithExtent = false;
    this->bAllowPartialPaths = true;
    this->bCanStrafe = false;
    this->DestinationActor = NULL;
    this->bShouldOverrideGait = false;
    this->OverrideGait = EFGKGait::Walking;
    this->NavigationFilter = NULL;
}


