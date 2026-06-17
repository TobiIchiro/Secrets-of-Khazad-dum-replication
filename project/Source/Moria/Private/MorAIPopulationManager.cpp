#include "MorAIPopulationManager.h"
#include "MorAISpawnerComponent.h"

AMorAIPopulationManager::AMorAIPopulationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorAISpawnerComponent>(TEXT("SpawnerComponent"))) {
    this->PreferredSpawnLocationRadius = 800.00f;
    this->AllowedDistanceBetweenCellCenterAndNearestPermit = 5000.00f;
    this->MorSpawnerComponent = (UMorAISpawnerComponent*)SpawnerComponent;
    this->MaxSpawnGroupPerCell = 2;
    this->OnLookoutSquadBehavior = NULL;
    this->GuardAreaSquadBehavior = NULL;
    this->IdleInBaseSquadBehavior = NULL;
}

void AMorAIPopulationManager::SetSpawnLimit(int32 InMaxCount) {
}

void AMorAIPopulationManager::OnSleepCycle(float UnusedA, float UnusedB) {
}

void AMorAIPopulationManager::OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation) {
}

void AMorAIPopulationManager::OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState) {
}

void AMorAIPopulationManager::OnAIDied(AActor* DeadActor) {
}


