#include "MorCharacterDespawnFXComponent.h"

UMorCharacterDespawnFXComponent::UMorCharacterDespawnFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectSystem = NULL;
    this->EffectAudio = NULL;
    this->BlendCurve = NULL;
    this->WaitBeforeEffect = 2.00f;
    this->EffectDuration = 2.00f;
    this->SpawnedEffect = NULL;
}

void UMorCharacterDespawnFXComponent::OnDeath(AActor* Actor) {
}

void UMorCharacterDespawnFXComponent::ActivateEffect() {
}


