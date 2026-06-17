#include "VoxelNode_HeightmapSampler.h"

UVoxelNode_HeightmapSampler::UVoxelNode_HeightmapSampler() {
    this->bFloatHeightmap = false;
    this->HeightmapFloat = NULL;
    this->HeightmapUINT16 = NULL;
    this->SamplerType = EVoxelSamplerMode::Tile;
    this->bCenter = false;
}


