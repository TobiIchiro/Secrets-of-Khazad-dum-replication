#include "WorldLayoutBubble.h"
#include "Templates/SubclassOf.h"

UWorldLayoutBubble::UWorldLayoutBubble() {
    this->State = EBubbleState::Inactive;
    this->UnloadState = EBubbleUnloadState::Inactive;
    this->LiveFallbackContainerIndex = -1;
    this->BubbleDefinition = NULL;
    this->NavMeshLockVolume = NULL;
    this->VoxelWorldVolume = NULL;
    this->NavMeshBuildStartTime = 0.00f;
    this->bForceRealizationLoadTime = false;
    this->ForceRealizationLoadTime = 0.00f;
    this->bForceRealizationDelayGameplayTime = false;
    this->ForceRealizationDelayGameplayTime = 0.00f;
    this->VoxelBuildStartTime = 0.00f;
    this->PersistedVersion = 0;
    this->PersistedEarthquakeId = 0;
    this->bEarthquakePending = false;
    this->bFirstSetupFallbackContainerFinished = false;
    this->LastVoxelUpdateTime = 0.00f;
    this->BubbleInstance = NULL;
    this->BubbleLevelTag = NULL;
    this->LevelStream = NULL;
    this->PanicLevelStream = NULL;
}

UWorldLayoutBubble* UWorldLayoutBubble::TryFindStationaryBubbleParent(const AActor* Actor) {
    return NULL;
}

void UWorldLayoutBubble::HandleOnLevelLoaded() {
}

UWorldLayoutBubble* UWorldLayoutBubble::FindStationaryBubbleParent(const AActor* Actor) {
    return NULL;
}

void UWorldLayoutBubble::FindBubbleActorsByName(const FName& SearchName, TArray<AActor*>& OutActors) const {
}

void UWorldLayoutBubble::FindBubbleActorsByClass(TSubclassOf<AActor> SearchClass, TArray<AActor*>& OutActors) const {
}


