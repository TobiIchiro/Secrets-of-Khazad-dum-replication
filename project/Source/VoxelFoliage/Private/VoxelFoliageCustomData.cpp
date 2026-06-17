#include "VoxelFoliageCustomData.h"

FVoxelFoliageCustomData::FVoxelFoliageCustomData() {
    this->Type = EVoxelFoliageCustomDataType::ColorGeneratorOutput;
    this->bUseMainGenerator = false;
    this->UVChannel = 0;
    this->UVAxis = EVoxelUVAxis::U;
}

