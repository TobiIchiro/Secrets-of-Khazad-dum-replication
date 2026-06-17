#pragma once
#include "CoreMinimal.h"
#include "VoxelFloatInterval.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelFloatInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FVoxelFloatInterval();
};

