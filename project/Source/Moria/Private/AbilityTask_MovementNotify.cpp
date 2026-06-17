#include "AbilityTask_MovementNotify.h"

UAbilityTask_MovementNotify::UAbilityTask_MovementNotify() {
    this->State = NULL;
}

void UAbilityTask_MovementNotify::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

UAbilityTask_MovementNotify* UAbilityTask_MovementNotify::CreateMovementNotifyTask(UMorGameplayAbility_MeleeAttack* OwningAbility, const UFGKAnimNotifyState* NotifyState) {
    return NULL;
}


