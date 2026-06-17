#include "WorldVoxelParameters.h"

FWorldVoxelParameters::FWorldVoxelParameters() {
    this->DistortFeatureScale = 0.00f;
    this->DistortWeight = 0.00f;
    this->VoronoiFeatureScale = 0.00f;
    this->VoronoiOctaves = 0;
    this->VeinDistortScale = 0.00f;
    this->VeinDistortAmount = 0.00f;
    this->VeinMinRadius = 0.00f;
    this->VeinMaxRadius = 0.00f;
    this->VeinSubdivideThreshold = 0.00f;
}

