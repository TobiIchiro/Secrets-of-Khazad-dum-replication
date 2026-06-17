#include "VoxelToolsBase.h"

UVoxelToolsBase::UVoxelToolsBase() {
}

FVoxelIntBox UVoxelToolsBase::GetModifiedVoxelValuesBounds(const TArray<FModifiedVoxelValue>& ModifiedVoxels) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelToolsBase::GetModifiedVoxelMaterialsBounds(const TArray<FModifiedVoxelMaterial>& ModifiedVoxels) {
    return FVoxelIntBox{};
}


