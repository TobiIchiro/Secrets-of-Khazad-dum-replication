#include "FGKBehaviorState_ChargeAttack.h"

UFGKBehaviorState_ChargeAttack::UFGKBehaviorState_ChargeAttack() {
    this->CloseMeleeDistance = 100.00f;
    this->PreviousGait = EFGKGait::Walking;
    this->TargetProxy = NULL;
}


