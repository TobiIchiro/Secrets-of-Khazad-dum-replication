#include "FGKLootSpawnerComponent.h"

UFGKLootSpawnerComponent::UFGKLootSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LootSpawnerData = NULL;
    this->bCanOnlySpawnOnce = false;
    this->bSpawned = false;
}

void UFGKLootSpawnerComponent::SpawnLoot() {
}

void UFGKLootSpawnerComponent::MulticastLaunchItems_Implementation(const TArray<FLootSpawnParams>& SpawnParams, const FVector& InitialPosition) {
}


