#include "GameplayEffect_RuneOnHit.h"

UGameplayEffect_RuneOnHit::UGameplayEffect_RuneOnHit() {
    this->ReactionSeverity = EReactionSeverity::Cosmetic;
    this->ReactResistancePenetration = 0;
    this->KnockbackForce = 0.00f;
    this->KnockupForce = 0.00f;
    this->ApplicationFrequency = EGameplayEffect_RuneOnHitApplicationFrequency::AllTargetsAllHits;
    this->ApplicationTarget = EGameplayEffect_RuneOnHitApplicationTarget::Victim;
}


