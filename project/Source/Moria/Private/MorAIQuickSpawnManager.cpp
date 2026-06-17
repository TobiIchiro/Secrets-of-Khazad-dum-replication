#include "MorAIQuickSpawnManager.h"
#include "MorAISpawnerComponent.h"

AMorAIQuickSpawnManager::AMorAIQuickSpawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->SpawnManager = NULL;
    this->PopulationManager = NULL;
}

void AMorAIQuickSpawnManager::HandleOnActorDestroyed(AActor* DestroyedActor) {
}


