#include "FGKAIPerceptionComponent.h"

UFGKAIPerceptionComponent::UFGKAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FullAwarenessBufferSeconds = 4.00f;
}

void UFGKAIPerceptionComponent::RemoveSenseConfigsOverride(UFGKAISenseConfigsOverride* SenseConfigsOverride) {
}


