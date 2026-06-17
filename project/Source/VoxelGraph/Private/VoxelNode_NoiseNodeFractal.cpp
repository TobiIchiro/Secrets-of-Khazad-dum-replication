#include "VoxelNode_NoiseNodeFractal.h"

UVoxelNode_NoiseNodeFractal::UVoxelNode_NoiseNodeFractal() {
    this->FractalOctaves = 3;
    this->FractalLacunarity = 2.00f;
    this->FractalGain = 0.50f;
    this->FractalType = EVoxelNoiseFractalType::FBM;
}


