#include "MorGameplayLightSamplerComponent.h"

UMorGameplayLightSamplerComponent::UMorGameplayLightSamplerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bDisableConstructionReticle = false;
    this->bUsesAmbientLight = true;
    this->bUsesCellLight = true;
}

FString UMorGameplayLightSamplerComponent::GetLightDebugString() const {
    return TEXT("");
}

FMorGameplayLightSample UMorGameplayLightSamplerComponent::GetLightAmountDetailed() const {
    return FMorGameplayLightSample{};
}

float UMorGameplayLightSamplerComponent::GetLightAmount() const {
    return 0.0f;
}


