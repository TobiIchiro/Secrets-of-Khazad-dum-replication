#pragma once
#include "CoreMinimal.h"
#include "VoxelSurfaceEditsVoxelBase.h"
#include "VoxelSurfaceEditsVoxel.generated.h"

USTRUCT(BlueprintType)
struct FVoxelSurfaceEditsVoxel : public FVoxelSurfaceEditsVoxelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    VOXEL_API FVoxelSurfaceEditsVoxel();
};

