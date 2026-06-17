#include "VoxelNode_VoxelTextureSampler.h"

UVoxelNode_VoxelTextureSampler::UVoxelNode_VoxelTextureSampler() {
    this->bBilinearInterpolation = true;
    this->Mode = EVoxelSamplerMode::Tile;
}


