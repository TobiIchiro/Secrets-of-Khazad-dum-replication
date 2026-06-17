#include "VoxelToolBaseConfig.h"

FVoxelToolBaseConfig::FVoxelToolBaseConfig() {
    this->OverlayMaterial = NULL;
    this->MeshMaterial = NULL;
    this->Stride = 0.00f;
    this->bUseFixedDirection = false;
    this->bUseFixedNormal = false;
    this->bHasAlignment = false;
    this->Alignment = EVoxelToolAlignment::Surface;
    this->bAirMode = false;
    this->DistanceToCamera = 0.00f;
    this->bShowPlanePreview = false;
}

