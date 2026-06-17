#include "MorNPCStorySpawnerComponent.h"

UMorNPCStorySpawnerComponent::UMorNPCStorySpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseInventoryPreset = false;
    this->bSpawnAutomatically = true;
    this->SpawnMode = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->bCanBeKilled = false;
    this->SiblingSpawnerComponent = NULL;
    this->CurrentSpawnedCharacter = NULL;
}

void UMorNPCStorySpawnerComponent::RequestSpawnCharacter() {
}

void UMorNPCStorySpawnerComponent::OnWorldGenDone() {
}

void UMorNPCStorySpawnerComponent::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}


