#include "MorDwarfOnDeathScreenFXComponent.h"

UMorDwarfOnDeathScreenFXComponent::UMorDwarfOnDeathScreenFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostProcessComponent = NULL;
    this->BlendCurve = NULL;
    this->BlendTime = 2.00f;
}

void UMorDwarfOnDeathScreenFXComponent::OnReviveOrRespawnClient_Implementation(AActor* Actor) {
}

void UMorDwarfOnDeathScreenFXComponent::OnReviveOrRespawn(AActor* Actor) {
}

void UMorDwarfOnDeathScreenFXComponent::OnDeathClient_Implementation(AActor* Actor) {
}

void UMorDwarfOnDeathScreenFXComponent::OnDeath(AActor* Actor) {
}


