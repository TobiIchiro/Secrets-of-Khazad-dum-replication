#include "FGKAudioRandomSpawnerComponent.h"

UFGKAudioRandomSpawnerComponent::UFGKAudioRandomSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxNumberOfEmitters = 10;
    this->Radius = 1000.00f;
    this->HeightAboveGroundMin = 50.00f;
    this->HeightAboveGroundMax = 200.00f;
    this->SearchHeight = 200.00f;
    this->StartEvent = NULL;
    this->CapacityBias = 0.70f;
}


