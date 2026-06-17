#include "VoxelToolWithAlignment.h"

UVoxelToolWithAlignment::UVoxelToolWithAlignment() {
    this->Alignment = EVoxelToolAlignment::View;
    this->bAirMode = false;
    this->DistanceToCamera = 10000.00f;
    this->bShowPlanePreview = true;
}


