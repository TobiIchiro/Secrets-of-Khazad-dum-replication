#include "MorCombatHitSettings.h"

FMorCombatHitSettings::FMorCombatHitSettings() {
    this->HitEffect = NULL;
    this->ReactionSeverity = EReactionSeverity::Cosmetic;
    this->KnockbackForce = 0.00f;
    this->KnockupForce = 0.00f;
    this->ProximityHitRadius = 0.00f;
    this->ProximityHitAngle = 0.00f;
    this->bShouldCheckObstruction = false;
    this->bCanBeBlocked = false;
}

