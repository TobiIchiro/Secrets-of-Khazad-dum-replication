#include "MorBehaviorState_AttackMelee.h"

UMorBehaviorState_AttackMelee::UMorBehaviorState_AttackMelee() {
    this->bRequireAttackSlot = true;
    this->bTargetBreakable = false;
    this->CombatManager = NULL;
    this->Target = NULL;
}


