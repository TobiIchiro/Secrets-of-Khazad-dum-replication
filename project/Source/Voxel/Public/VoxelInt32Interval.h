#pragma once
#include "CoreMinimal.h"
#include "VoxelInt32Interval.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelInt32Interval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    FVoxelInt32Interval();
};

