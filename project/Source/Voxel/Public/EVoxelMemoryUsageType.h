#pragma once
#include "CoreMinimal.h"
#include "EVoxelMemoryUsageType.generated.h"

UENUM(BlueprintType)
enum class EVoxelMemoryUsageType : uint8 {
    VoxelsDirtyValuesData,
    VoxelsDirtyMaterialsData,
    VoxelsCachedValuesData,
    VoxelsCachedMaterialsData,
    UndoRedo,
    Multiplayer,
    IntermediateBuffers,
    MeshesIndices,
    MeshesTessellationIndices,
    MeshesVertices,
    MeshesColors,
    MeshesUVsAndTangents,
    DataAssets,
    HeightmapAssets,
    UncompressedSaves,
    CompressedSaves,
};

