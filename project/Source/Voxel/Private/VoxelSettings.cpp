#include "VoxelSettings.h"

UVoxelSettings::UVoxelSettings() {
    this->NumberOfThreads = 0;
    this->PriorityDuration = 0.00f;
    this->ThreadPriority = EVoxelThreadPriority::Normal;
    this->bShowNotifications = true;
    this->bDisableAutoPreview = false;
    this->bRoundBeforeSaving = false;
    this->DefaultCompressionLevel = 1;
}


