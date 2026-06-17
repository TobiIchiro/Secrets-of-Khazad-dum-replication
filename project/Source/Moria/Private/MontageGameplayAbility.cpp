#include "MontageGameplayAbility.h"

UMontageGameplayAbility::UMontageGameplayAbility() {
    this->MaxDuration = -1.00f;
    this->bMaxDurationCompletes = false;
    this->ChargeEffect = NULL;
    this->Anim = NULL;
    this->CurrentAnim = NULL;
    this->ExecuteTime = -1.00f;
    this->bEndMontageWithAbility = false;
    this->bEndMontageOnEarlyExit = false;
    this->bDontInterruptPlayingMontages = false;
    this->TargetUsingActor = NULL;
    this->HitsTeam = EHitsTeam::Both;
    this->TargetEffect = NULL;
    this->bRetriggerIfHeld = false;
    this->bEarlyExitFastRetrigger = false;
    this->bGrooves = false;
    this->StartTimeType = Zero;
    this->StartTimeMin = 0.00f;
    this->StartTimeMax = 0.00f;
    this->bAllowActivationWithoutAnim = false;
    this->CurrentTargetActor = NULL;
    this->bLockRotation = false;
    this->bSubscribeToAnimNotifies = false;
    this->bExecuteOnHitIdeal = true;
}

void UMontageGameplayAbility::TimerReady() {
}

void UMontageGameplayAbility::TargetValidData(const FGameplayAbilityTargetDataHandle& Data) {
}

void UMontageGameplayAbility::TargetCancelled(const FGameplayAbilityTargetDataHandle& Data) {
}

void UMontageGameplayAbility::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

void UMontageGameplayAbility::OnNotifyStateBeginReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalAnimationTime) {
}

void UMontageGameplayAbility::OnNotifyReceived(const UFGKAnimNotify* Notify) {
}

void UMontageGameplayAbility::MontageInterruptedCallback() {
}

void UMontageGameplayAbility::MontageCompletedCallback() {
}

void UMontageGameplayAbility::MontageCancelledCallback() {
}

void UMontageGameplayAbility::MontageBlendOutCallback() {
}

void UMontageGameplayAbility::ExecuteSync() {
}

void UMontageGameplayAbility::EarlyExitInput(EInputType Type) {
}

void UMontageGameplayAbility::Deactivate() {
}


