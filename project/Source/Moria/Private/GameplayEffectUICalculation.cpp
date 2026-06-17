#include "GameplayEffectUICalculation.h"

UGameplayEffectUICalculation::UGameplayEffectUICalculation() {
}

bool UGameplayEffectUICalculation::ShouldDisplay(const AActor* EffectInstigator) const {
    return false;
}

float UGameplayEffectUICalculation::CalculateProgressPercentage_Implementation(const AActor* EffectInstigator) const {
    return 0.0f;
}


