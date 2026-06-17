#include "AbilityTask_DynamicForceFeedback.h"

UAbilityTask_DynamicForceFeedback::UAbilityTask_DynamicForceFeedback() {
    this->Curve = NULL;
    this->Controller = NULL;
}

UAbilityTask_DynamicForceFeedback* UAbilityTask_DynamicForceFeedback::CreateDynamicForceFeedbackTask(UGameplayAbility* OwningAbility, float Duration, UCurveFloat* NewCurve) {
    return NULL;
}


