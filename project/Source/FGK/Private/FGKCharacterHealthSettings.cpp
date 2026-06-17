#include "FGKCharacterHealthSettings.h"

UFGKCharacterHealthSettings::UFGKCharacterHealthSettings() {
    this->bCanScaleMaxHealth = false;
    this->bUseMinHealthRatio = false;
    this->MaxHealth = 100.00f;
    this->MinHealth = 0.00f;
    this->MinHealthRatio = 0.00f;
    this->HurtFromLandingMinDistance = 700.00f;
    this->HurtFromLandingBaseDamage = 50.00f;
    this->MaxHealthToNumPlayersCurve = NULL;
    this->FallDamageToDistanceCurve = NULL;
    this->bAcceptedAllDamageTypes = true;
    this->bCanEverBeKilledFromFalling = false;
    this->bCanEverBeHurtFromLanding = true;
    this->HitReactionTable = NULL;
    this->PartialHitTraceChannel = ECC_GameTraceChannel6;
    this->KillFromFallingDistance = 1000.00f;
    this->BlockDamageScale = 0.50f;
}


