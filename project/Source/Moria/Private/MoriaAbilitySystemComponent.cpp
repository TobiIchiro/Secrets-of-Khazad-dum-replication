#include "MoriaAbilitySystemComponent.h"

UMoriaAbilitySystemComponent::UMoriaAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurvivalSettings = NULL;
    this->AttributeDefinitions = NULL;
    this->LightSampler = NULL;
}

void UMoriaAbilitySystemComponent::RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

TArray<UMorActiveEffectUIInfo*> UMoriaAbilitySystemComponent::GetEffectUIInfo() const {
    return TArray<UMorActiveEffectUIInfo*>();
}

TArray<UMAttributeUIInfo*> UMoriaAbilitySystemComponent::GetAttributeUIInfo() const {
    return TArray<UMAttributeUIInfo*>();
}

void UMoriaAbilitySystemComponent::ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void UMoriaAbilitySystemComponent::AddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}


