#include "FGKBehaviorState_RandomHub.h"

UFGKBehaviorState_RandomHub::UFGKBehaviorState_RandomHub() {
    this->bIsHub = true;
    this->RandomChance = 0.50f;
    this->LockTimerMin = 0.00f;
    this->LockTimerMax = 10.00f;
}


