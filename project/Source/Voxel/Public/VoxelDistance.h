#pragma once
#include "CoreMinimal.h"
#include "EVoxelDistanceType.h"
#include "VoxelDistance.generated.h"

USTRUCT(BlueprintType)
struct FVoxelDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelDistanceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    VOXEL_API FVoxelDistance();
};

