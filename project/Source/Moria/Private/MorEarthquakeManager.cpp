#include "MorEarthquakeManager.h"

AMorEarthquakeManager::AMorEarthquakeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedEffectsActor = NULL;
}

void AMorEarthquakeManager::WorldLayoutStarting(AWorldLayout* WorldLayout) {
}

void AMorEarthquakeManager::LoadingScreenStateChanged(ELoadingScreenState LoadingScreenState) {
}

bool AMorEarthquakeManager::IsEarthquake() const {
    return false;
}

void AMorEarthquakeManager::EarthquakeStarted() {
}


