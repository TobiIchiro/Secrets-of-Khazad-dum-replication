#include "VoxelMeshImporterSettings.h"

FVoxelMeshImporterSettings::FVoxelMeshImporterSettings() {
    this->bImportColors = false;
    this->ColorsMaterial = NULL;
    this->bImportUVs = false;
    this->UVsMaterial = NULL;
    this->RenderTargetSize = 0;
}

