#include "MorGameplayAbility_MeleeAttack_Charge.h"

UMorGameplayAbility_MeleeAttack_Charge::UMorGameplayAbility_MeleeAttack_Charge() {
    this->HitSettings.AddDefaulted(1);
    this->ReactTime = 1.50f;
    this->StunnedTime = 8.00f;
    this->BreakoutDamageThreshold = 60.00f;
    this->CheckForBlocked = NULL;
    this->WaitForDamageDoneTask = NULL;
    this->WaitDelayTask = NULL;
}

void UMorGameplayAbility_MeleeAttack_Charge::StartStunnedLoop() {
}

void UMorGameplayAbility_MeleeAttack_Charge::OnWaitDelayFinished() {
}

void UMorGameplayAbility_MeleeAttack_Charge::OnDamageThresholdReached() {
}

void UMorGameplayAbility_MeleeAttack_Charge::OnBlocked() {
}


