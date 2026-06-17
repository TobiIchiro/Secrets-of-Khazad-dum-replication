#include "VoxelGeneratorInit.h"

FVoxelGeneratorInit::FVoxelGeneratorInit() {
    this->VoxelSize = 0.00f;
    this->WorldSize = 0;
    this->RenderType = EVoxelRenderType::MarchingCubes;
    this->MaterialConfig = EVoxelMaterialConfig::RGB;
    this->MaterialCollection = NULL;
}

