#include "VoxelSimpleInvokerComponent.h"

UVoxelSimpleInvokerComponent::UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseForLOD = true;
    this->LODToSet = 0;
    this->LODRange = 1000.00f;
    this->bUseForCollisions = true;
    this->CollisionsRange = 1000.00f;
    this->bUseForNavmesh = true;
    this->NavmeshRange = 1000.00f;
}

FVector UVoxelSimpleInvokerComponent::GetInvokerGlobalPosition_Implementation() const {
    return FVector{};
}


