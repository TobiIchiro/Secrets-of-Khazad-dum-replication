#include "InscribedRuneComponent.h"

UInscribedRuneComponent::UInscribedRuneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponMasterMaterial = NULL;
    this->GlowUpdateInterval = 1.00f;
    this->RadiusThresholdForMaxGlow = 1000.00f;
    this->ThresholdLightAmountToGlow = 50.00f;
    this->ShadowRepeller = NULL;
}

void UInscribedRuneComponent::SetGlowOnNearbyParam(float Value) {
}

bool UInscribedRuneComponent::IsGlowOnEnemyNearby() const {
    return false;
}

float UInscribedRuneComponent::GetTargetGlowOnNearby() {
    return 0.0f;
}


