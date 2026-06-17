#include "VoxelMeshImporter.h"

AVoxelMeshImporter::AVoxelMeshImporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMesh = NULL;
    this->SizeX = 0;
    this->SizeY = 0;
    this->SizeZ = 0;
    this->NumberOfVoxels = 0;
    this->SizeInMB = 0.00f;
    this->MeshComponent = NULL;
    this->MaterialInstance = NULL;
    this->CachedStaticMesh = NULL;
}


