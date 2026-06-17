#include "FGKRadialDamageParams.h"

FFGKRadialDamageParams::FFGKRadialDamageParams() {
    this->BaseDamage = 0.00f;
    this->MinimumDamage = 0.00f;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->Falloff = 0.00f;
    this->ExplosionTravelSpeed = 0.00f;
    this->DamageType = NULL;
    this->ReactionIntensity = EFGKReactionIntensity::None;
    this->ReactionResult = EFGKReactionResult::OnFeet;
    this->KnockbackForce = 0.00f;
    this->KnockupForce = 0.00f;
}

