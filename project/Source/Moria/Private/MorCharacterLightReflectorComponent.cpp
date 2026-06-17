#include "MorCharacterLightReflectorComponent.h"

UMorCharacterLightReflectorComponent::UMorCharacterLightReflectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorCharacterLightReflectorComponent::StopReflectorTarget_Implementation() {
}

void UMorCharacterLightReflectorComponent::ServerSetReflectorTarget_Implementation(UMorGameplayLightReflectorComponent* TargetComp) {
}

void UMorCharacterLightReflectorComponent::ServerRotateReflectorTo_Implementation(const FRotator& TargetRotation) {
}

void UMorCharacterLightReflectorComponent::ServerRotateReflector_Implementation(const FVector& InputDirection) {
}


