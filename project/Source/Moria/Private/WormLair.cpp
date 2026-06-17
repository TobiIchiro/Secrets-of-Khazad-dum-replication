#include "WormLair.h"
#include "MorAISpawnerComponent.h"

AWormLair::AWormLair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldAlwaysUseOverridePopulationRow = false;
    this->WormSquadClass = NULL;
    this->WormSquadBehavior = NULL;
    this->SpawnRadius = 1500.00f;
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->InitialSpawnWaitingTime = 2.00f;
    this->WaveSpawnWaitingTime = 4.00f;
    this->WavesCount = 1;
    this->WormsNumToWin = 0;
    this->SpawnedSquad = NULL;
}

void AWormLair::OnSpawnedDeadOrDestroyed(AActor* SpawnedActor) {
}

void AWormLair::OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation) {
}


