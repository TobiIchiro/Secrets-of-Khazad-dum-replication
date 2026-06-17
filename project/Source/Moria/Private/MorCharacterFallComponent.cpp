#include "MorCharacterFallComponent.h"

UMorCharacterFallComponent::UMorCharacterFallComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = NULL;
    this->SafeLandingIntensityMin = 0.00f;
    this->DamageLandingIntensityMin = 0.50f;
    this->MorOwner = NULL;
    this->MoveComp = NULL;
    this->AbilitySystem = NULL;
}

void UMorCharacterFallComponent::MovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UMorCharacterFallComponent::Landed(const FHitResult& Hit) {
}


