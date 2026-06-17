#include "ProcWorldManager.h"

AProcWorldManager::AProcWorldManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlaybackInitialDelay = 2.00f;
    this->PlaybackStepDelay = 0.10f;
    this->PlaybackModelSize = 6.00f;
    this->PassageElement = NULL;
    this->BubbleElement = NULL;
    this->LandmarkElement = NULL;
    this->RouteElement = NULL;
}


