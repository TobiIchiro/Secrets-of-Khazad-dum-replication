#include "AbilityTask_WaitForInput.h"

UAbilityTask_WaitForInput::UAbilityTask_WaitForInput() {
    this->CombatManager = NULL;
}

void UAbilityTask_WaitForInput::PrimaryAttackPressed() {
}

void UAbilityTask_WaitForInput::JumpPressed() {
}

UAbilityTask_WaitForInput* UAbilityTask_WaitForInput::CreateWaitFotInputTask(UGameplayAbility* OwningAbility) {
    return NULL;
}


