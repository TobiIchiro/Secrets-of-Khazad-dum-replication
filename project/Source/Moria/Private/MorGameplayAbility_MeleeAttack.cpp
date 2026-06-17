#include "MorGameplayAbility_MeleeAttack.h"

UMorGameplayAbility_MeleeAttack::UMorGameplayAbility_MeleeAttack() {
    this->bRetriggerInstancedAbility = true;
    this->bSubscribeToAnimNotifies = true;
    this->bExecuteOnHitIdeal = false;
    this->AltNoMovementAnim = NULL;
    this->bDummyProp = false;
    this->HitSettings.AddDefaulted(1);
    this->PerfectBlockSeverity = EReactionSeverity::Heavy;
    this->RotationAdjustSpeedLimit = 90.00f;
    this->VelocityAdjustSpeedLimit = 1000.00f;
    this->MinTargetRange = 0.00f;
    this->MaxTargetRange = 800.00f;
    this->MaxTargetOffsetZ = 200.00f;
    this->ConnectRange = 125.00f;
    this->bOnlyUseRootMotionIfPlayerRequestingMove = false;
    this->bAllowRootMotionStretching = false;
    this->bStretchOnlyForwardMotion = true;
    this->bForceAimRotation = false;
    this->HitPauseTime = 0.00f;
    this->ImpactDirectionKnockbackFactor = 0.50f;
    this->bIsChargedLowAttack = false;
    this->bIsChargedFullAttack = false;
    this->KnockbackOnPerfectBlocked = 400.00f;
    this->KnockUpOnPerfectBlocked = 10.00f;
    this->MovementTask = NULL;
    this->TargetActor = NULL;
    this->RootMotionSourceID = 0;
    this->ChargedWeapon = NULL;
}

void UMorGameplayAbility_MeleeAttack::OnHitEndDetected(int32 HitIndex, FMeleeHitInfo& HitInfo, FHitResult& Hit) {
}

void UMorGameplayAbility_MeleeAttack::OnHitDetected(int32 HitIndex, FMeleeHitInfo& HitInfo, FHitResult& Hit) {
}

void UMorGameplayAbility_MeleeAttack::OnComboInput(float ElapsedTime) {
}

void UMorGameplayAbility_MeleeAttack::ChooseAndActivateComboAttack() {
}


