#include "VoxelNode_CellularNoise.h"

UVoxelNode_CellularNoise::UVoxelNode_CellularNoise() {
    this->DistanceFunction = EVoxelCellularDistanceFunction::Euclidean;
    this->ReturnType = EVoxelCellularReturnType::CellValue;
    this->Jitter = 0.45f;
}


