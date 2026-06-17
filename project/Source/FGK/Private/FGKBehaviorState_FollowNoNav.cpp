#include "FGKBehaviorState_FollowNoNav.h"

UFGKBehaviorState_FollowNoNav::UFGKBehaviorState_FollowNoNav() {
    this->FollowTarget = NULL;
    this->RunTime = 1.00f;
    this->CloseDistance = 350.00f;
    this->FarDistance = 700.00f;
}


