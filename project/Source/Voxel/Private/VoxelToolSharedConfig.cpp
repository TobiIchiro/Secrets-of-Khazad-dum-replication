#include "VoxelToolSharedConfig.h"

UVoxelToolSharedConfig::UVoxelToolSharedConfig() {
    this->BrushSize = 1000.00f;
    this->ToolOpacity = 0.50f;
    this->AlignToMovementSmoothness = 0.75f;
    this->ControlSpeed = 0.05f;
    this->bCacheData = true;
    this->bMultiThreaded = true;
    this->ComputeDevice = EVoxelComputeDevice::GPU;
    this->bRegenerateFoliage = true;
    this->bCheckForSingleValues = true;
    this->bWaitForUpdates = true;
    this->bDebug = false;
    this->FixedDeltaTime = 0.02f;
}


