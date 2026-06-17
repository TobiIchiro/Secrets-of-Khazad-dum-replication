#include "LastingInteractComponent.h"

ULastingInteractComponent::ULastingInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ULastingInteractComponent::TargetDestroyed(AActor* DestroyedActor) {
}

void ULastingInteractComponent::MovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void ULastingInteractComponent::EquippedChanged() {
}


