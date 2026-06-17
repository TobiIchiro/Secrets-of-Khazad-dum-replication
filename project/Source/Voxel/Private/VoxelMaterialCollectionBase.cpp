#include "VoxelMaterialCollectionBase.h"

UVoxelMaterialCollectionBase::UVoxelMaterialCollectionBase() {
}

TArray<FVoxelMaterialCollectionMaterialInfo> UVoxelMaterialCollectionBase::GetMaterials() const {
    return TArray<FVoxelMaterialCollectionMaterialInfo>();
}

int32 UVoxelMaterialCollectionBase::GetMaterialIndex(FName Name) const {
    return 0;
}

UMaterialInterface* UVoxelMaterialCollectionBase::GetIndexMaterial(uint8 Index) const {
    return NULL;
}


