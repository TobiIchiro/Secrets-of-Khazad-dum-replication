#include "AbilityTask_NotifyStateEffect.h"

UAbilityTask_NotifyStateEffect::UAbilityTask_NotifyStateEffect() {
    this->State = NULL;
}

void UAbilityTask_NotifyStateEffect::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

UAbilityTask_NotifyStateEffect* UAbilityTask_NotifyStateEffect::CreateNotifyStateEffectTask(UMoriaGameplayAbility* OwningAbility, const UFGKAnimNotifyState* NotifyState) {
    return NULL;
}


