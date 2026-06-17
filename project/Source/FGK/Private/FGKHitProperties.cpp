#include "FGKHitProperties.h"

FFGKHitProperties::FFGKHitProperties() {
    this->Source = EFGKHitDetectionSource::MainWeapon;
    this->BoneRadius = 0.00f;
    this->ProximityRadius = 0.00f;
    this->ProximityAngle = 0.00f;
    this->RehitTime = 0.00f;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->Intensity = EFGKReactionIntensity::None;
    this->Result = EFGKReactionResult::OnFeet;
    this->KnockbackForce = 0.00f;
    this->KnockupForce = 0.00f;
    this->bKnockbackInTargetDirection = false;
    this->bKnockbackInHitDirection = false;
    this->bApplyAttackerVelocity = false;
    this->bApplyWeaponVelocity = false;
    this->bDamageScaleFromSpeed = false;
    this->KnockbackVelocityScale = 0.00f;
    this->MaxVelocityKnockback = 0.00f;
}

