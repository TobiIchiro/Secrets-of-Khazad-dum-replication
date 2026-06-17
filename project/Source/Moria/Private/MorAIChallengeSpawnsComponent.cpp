#include "MorAIChallengeSpawnsComponent.h"

UMorAIChallengeSpawnsComponent::UMorAIChallengeSpawnsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseExplicitSpawns = false;
    this->SpawnRadius = 100.00f;
    this->bShouldSpawnsBeAwareOfEachother = true;
    this->SiblingSpawnerComponent = NULL;
    this->bChallengeCleared = false;
}

void UMorAIChallengeSpawnsComponent::RequestSpawnCharacters() {
}

void UMorAIChallengeSpawnsComponent::OnWorldGenDone() {
}

void UMorAIChallengeSpawnsComponent::OnSpawnedCharacterKilled(AActor* KilledCharacter) {
}

void UMorAIChallengeSpawnsComponent::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}


