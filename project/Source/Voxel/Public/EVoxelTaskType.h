#pragma once
#include "CoreMinimal.h"
#include "EVoxelTaskType.generated.h"

UENUM(BlueprintType)
enum class EVoxelTaskType : uint8 {
    ChunksMeshing,
    CollisionsChunksMeshing,
    VisibleChunksMeshing,
    VisibleCollisionsChunksMeshing,
    CollisionCooking,
    FoliageBuild,
    HISMBuild,
    AsyncEditFunctions,
    MeshMerge,
    RenderOctree,
    Max,
};

