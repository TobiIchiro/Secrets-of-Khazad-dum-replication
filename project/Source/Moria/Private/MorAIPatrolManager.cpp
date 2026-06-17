#include "MorAIPatrolManager.h"
#include "MorAISpawnerComponent.h"

AMorAIPatrolManager::AMorAIPatrolManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->TimedPatrolRadius = 8000.00f;
    this->OrcMaxNumberOfPatrols = 5;
    this->FaunaMaxNumberOfPatrols = 5;
    this->PostEncounterTimeSinceLastPatrol = 0.00f;
    this->DistanceFromEndedEncounterToResetPatrolTimer = 3000.00f;
    this->PatrolRootBehaviorState = NULL;
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->TimeBetweenTimeOfDayChecks = 180.00f;
    this->SpawnQueryTemplate = NULL;
    this->GetRandomPointRange = 200.00f;
    this->PlayerToSpawnPatrolAround = NULL;
}

void AMorAIPatrolManager::OnWorldGenDone() {
}

void AMorAIPatrolManager::OnSleepCycle(int32 SleepCount) {
}

void AMorAIPatrolManager::OnPatrolDestroyed(AActor* DestroyedPatrol) {
}

void AMorAIPatrolManager::OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation) {
}

void AMorAIPatrolManager::OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState) {
}


