#include "VoxelFoliageDensity.h"

FVoxelFoliageDensity::FVoxelFoliageDensity() {
    this->Type = EVoxelFoliageDensityType::Constant;
    this->Constant = 0.00f;
    this->bUseMainGenerator = false;
    this->RGBAChannel = EVoxelRGBA::R;
    this->UVChannel = 0;
    this->UVAxis = EVoxelUVAxis::U;
    this->FiveWayBlendChannel = 0;
    this->bInvertDensity = false;
}

