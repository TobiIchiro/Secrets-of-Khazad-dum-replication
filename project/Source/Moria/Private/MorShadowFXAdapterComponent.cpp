#include "MorShadowFXAdapterComponent.h"

UMorShadowFXAdapterComponent::UMorShadowFXAdapterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldUpdate = true;
    this->bUsePlayerLocation = false;
}

float UMorShadowFXAdapterComponent::GetShadowInfluenceMagnitude() const {
    return 0.0f;
}

bool UMorShadowFXAdapterComponent::GetShadowInfluenceEnabled() const {
    return false;
}

FLinearColor UMorShadowFXAdapterComponent::GetShadowInfluenceColor() const {
    return FLinearColor{};
}


