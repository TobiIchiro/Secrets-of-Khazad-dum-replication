#include "VoxelHierarchicalInstancedStaticMeshComponent.h"

UVoxelHierarchicalInstancedStaticMeshComponent::UVoxelHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Voxel_BuildDelay = 0.50f;
    this->Voxel_DebugMaterial = NULL;
}


