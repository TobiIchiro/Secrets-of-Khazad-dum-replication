#include "VoxelFoliageSpawnSettings.h"

FVoxelFoliageSpawnSettings::FVoxelFoliageSpawnSettings() {
    this->SpawnType = EVoxelFoliageSpawnType::Ray;
    this->ChunkSize = 0;
    this->RandomGenerator = EVoxelFoliageRandomGenerator::Sobol;
    this->bInfiniteGenerationDistance = false;
    this->bCheckIfFloating_HeightOnly = false;
    this->bCheckIfCovered_HeightOnly = false;
}

