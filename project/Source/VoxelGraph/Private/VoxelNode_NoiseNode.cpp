#include "VoxelNode_NoiseNode.h"

UVoxelNode_NoiseNode::UVoxelNode_NoiseNode() {
    this->Frequency = 0.02f;
    this->Interpolation = EVoxelNoiseInterpolation::Quintic;
    this->NumberOfSamples = 1000000;
    this->Tolerance = 0.10f;
}


