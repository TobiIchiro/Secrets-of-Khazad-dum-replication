#include "VoxelCookingSettings.h"

FVoxelCookingSettings::FVoxelCookingSettings() {
    this->RenderOctreeDepth = 0;
    this->VoxelSize = 0.00f;
    this->RenderType = EVoxelRenderType::MarchingCubes;
    this->bLogProgress = false;
    this->bFastCollisionCook = false;
    this->bCleanCollisionMesh = false;
}

