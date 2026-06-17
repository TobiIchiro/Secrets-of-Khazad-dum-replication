#include "MontageHoldGameplayAbility.h"

UMontageHoldGameplayAbility::UMontageHoldGameplayAbility() {
    this->bDisplayAsHold = true;
    this->MontageLoopSectionName = TEXT("Loop");
    this->bUseHolding = true;
    this->bEndOnHoldFinished = false;
    this->bAppendChargeToTargetActor = false;
    this->MinChargeTime = 0.00f;
    this->FullChargeTime = 0.00f;
    this->MaxChargeTime = -1.00f;
    this->bEndHoldOnNoStamina = false;
    this->HoldReleasedMontage = NULL;
}

void UMontageHoldGameplayAbility::StaminaDepleted() {
}

void UMontageHoldGameplayAbility::HoldFinished(float HoldTime) {
}

void UMontageHoldGameplayAbility::FullCharged() {
}

void UMontageHoldGameplayAbility::ChargeTimerFinished() {
}


