#include "VoxelMeshImporterSettingsBase.h"

FVoxelMeshImporterSettingsBase::FVoxelMeshImporterSettingsBase() {
    this->VoxelSize = 0.00f;
    this->SweepDirection = EVoxelAxis::X;
    this->bReverseSweep = false;
    this->bWatertight = false;
    this->bHideLeaks = false;
    this->ExactBand = 0;
    this->DistanceDivisor = 0.00f;
}

