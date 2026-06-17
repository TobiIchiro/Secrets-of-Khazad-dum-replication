#include "VoxelSurfaceToolMask.h"

FVoxelSurfaceToolMask::FVoxelSurfaceToolMask() {
    this->Type = EVoxelSurfaceToolMaskType::Texture;
    this->Texture = NULL;
    this->Channel = EVoxelRGBA::R;
    this->bScaleWithBrushSize = false;
    this->GeneratorDebugTexture = NULL;
    this->Scale = 0.00f;
    this->Ratio = 0.00f;
}

