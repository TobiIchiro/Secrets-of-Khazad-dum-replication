#include "VoxelPerlinWormsSettings.h"

FVoxelPerlinWormsSettings::FVoxelPerlinWormsSettings() {
    this->Seed = 0;
    this->Radius = 0.00f;
    this->NumSegments = 0;
    this->SegmentLength = 0.00f;
    this->SplitProbability = 0.00f;
    this->SplitProbabilityGain = 0.00f;
    this->BranchMeanSize = 0;
    this->BranchSizeVariation = 0.00f;
    this->NoiseSegmentLength = 0.00f;
    this->MaxWorms = 0;
}

