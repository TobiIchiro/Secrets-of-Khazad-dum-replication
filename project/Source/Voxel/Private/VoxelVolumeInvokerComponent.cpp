#include "VoxelVolumeInvokerComponent.h"

UVoxelVolumeInvokerComponent::UVoxelVolumeInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseForEvents = false;
    this->bUseForPriorities = false;
    this->bUseForLOD = true;
    this->LODToSet = 0;
    this->bUseForCollisions = false;
    this->bUseForNavmesh = false;
}


