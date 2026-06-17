#include "VoxelLandscapeImporter.h"

AVoxelLandscapeImporter::AVoxelLandscapeImporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Landscape = NULL;
    this->MaterialConfig = EVoxelHeightmapImporterMaterialConfig::RGB;
}


