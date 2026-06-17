#include "VoxelPhysicsRelevancyComponent.h"

UVoxelPhysicsRelevancyComponent::UVoxelPhysicsRelevancyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxVoxelChunksLODForPhysics = 2;
    this->TimeToWaitBeforeActivating = 1.00f;
    this->TickInterval = 0.10f;
}


