#include "VoxelNode_TextureSampler.h"

UVoxelNode_TextureSampler::UVoxelNode_TextureSampler() {
    this->Texture = NULL;
    this->bBilinearInterpolation = true;
    this->Mode = EVoxelSamplerMode::Tile;
}


