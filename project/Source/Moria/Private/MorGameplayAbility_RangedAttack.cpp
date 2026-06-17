#include "MorGameplayAbility_RangedAttack.h"

UMorGameplayAbility_RangedAttack::UMorGameplayAbility_RangedAttack() {
    this->bAllowActivationWithoutAnim = true;
    this->bSubscribeToAnimNotifies = true;
    this->bUseHolding = false;
    this->WeaponAnim_Hold = NULL;
    this->WeaponAnim_Fire = NULL;
    this->MaxTargetRange = 10000.00f;
    this->MaxTargetOffsetZ = 5000.00f;
    this->MinSpeed = -1.00f;
    this->MaxSpeed = -1.00f;
    this->ProjectileClass = NULL;
    this->Spread = 0.00f;
    this->SpreadPitchScale = 0.25f;
    this->AmmoType = EMorMorGameplayAbility_RangedAttackAmmoType::ItemCount;
    this->bAutoTarget = true;
    this->bReleaseAndShootOnPrimaryAttack = false;
    this->PostShootDuration = -1.00f;
    this->ShootEffect = NULL;
}

void UMorGameplayAbility_RangedAttack::PrimaryReleaseShot() {
}


