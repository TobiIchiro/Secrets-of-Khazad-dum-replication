#include "FGKBehaviorState_Interact.h"

UFGKBehaviorState_Interact::UFGKBehaviorState_Interact() {
    this->bFinishOnActiveChild = false;
    this->bShouldMoveToPoint = true;
    this->bShouldFollowMovingPoint = false;
    this->AlignmentAcceptanceDistance = 10.00f;
    this->bAllowPartialPaths = true;
    this->bShouldOverrideGait = false;
    this->OverrideGait = EFGKGait::Walking;
    this->BehaviorPoint = NULL;
    this->MoveToInteractState = NULL;
}


