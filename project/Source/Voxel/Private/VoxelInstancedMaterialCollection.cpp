#include "VoxelInstancedMaterialCollection.h"

UVoxelInstancedMaterialCollection::UVoxelInstancedMaterialCollection() {
    this->MaxMaterialsToBlendAtOnce = 6;
    this->Redirects.AddDefaulted(2);
    this->ParametersPrefix = TEXT("VOXELPARAM_");
    this->Templates = NULL;
}


