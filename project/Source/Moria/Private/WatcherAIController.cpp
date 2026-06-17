#include "WatcherAIController.h"
#include "WatcherTargetingComponent.h"

AWatcherAIController::AWatcherAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWatcherTargetingComponent>(TEXT("TargetingComponent"))) {
    this->Watcher = NULL;
    this->TentacleTargetingComponents.AddDefaulted(1);
}

UWatcherTargetingComponent* AWatcherAIController::GetTentacleTargetingComponent(const int32 TentacleIndex) const {
    return NULL;
}


