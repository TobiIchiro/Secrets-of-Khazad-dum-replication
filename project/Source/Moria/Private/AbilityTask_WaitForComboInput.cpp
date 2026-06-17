#include "AbilityTask_WaitForComboInput.h"

UAbilityTask_WaitForComboInput::UAbilityTask_WaitForComboInput() {
    this->State = NULL;
}

void UAbilityTask_WaitForComboInput::OnPressCallback() {
}

void UAbilityTask_WaitForComboInput::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

UAbilityTask_WaitForComboInput* UAbilityTask_WaitForComboInput::CreateWaitForComboInputTask(UGameplayAbility* OwningAbility, const UFGKAnimNotifyState* NewState, bool bTestAlreadyPressed) {
    return NULL;
}


