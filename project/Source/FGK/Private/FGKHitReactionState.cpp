#include "FGKHitReactionState.h"

UFGKHitReactionState::UFGKHitReactionState() {
    this->bSnapRotationToMatchAttack = true;
    this->bSnapToMeleeAttacker = false;
    this->bDoNotFinishIfDead = false;
    this->bApplyOverrideForce = false;
    this->bCanBeDamaged = true;
    this->bHealthRegenInExit = false;
    this->bSetMinHealthRatioInEnter = false;
    this->bForceTargetApplied = false;
    this->ForceInHitDirection = 0.00f;
    this->ForceInUpDirection = 0.00f;
    this->TravelTime = 0.50f;
    this->Arc = 1.00f;
    this->Midpoint = 0.50f;
    this->HealthRegenRatio = 1.00f;
    this->MinHealthRatio = 1.00f;
    this->Attacker = NULL;
    this->CharacterAttacker = NULL;
}


