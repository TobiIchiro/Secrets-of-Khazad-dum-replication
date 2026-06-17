#include "MorThresholdEffectComponent.h"

UMorThresholdEffectComponent::UMorThresholdEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoriaAbilitySystem = NULL;
}

float UMorThresholdEffectComponent::GetFilledPercentage(FMorThresholdEffectRowHandle RowHandle) const {
    return 0.0f;
}

void UMorThresholdEffectComponent::ClientNotifyInstantMetaChange_Implementation(const FName EffectName, float Delta, bool bUseDeltaAsNewValueInstead) {
}

void UMorThresholdEffectComponent::ClientNotifyEffectReset_Implementation(const FName EffectName) {
}


