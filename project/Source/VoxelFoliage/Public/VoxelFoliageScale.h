#pragma once
#include "CoreMinimal.h"
#include "VoxelFloatInterval.h"
#include "EVoxelFoliageScaling.h"
#include "VoxelFoliageScale.generated.h"

USTRUCT(BlueprintType)
struct VOXELFOLIAGE_API FVoxelFoliageScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelFoliageScaling Scaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelFloatInterval ScaleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelFloatInterval ScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelFloatInterval ScaleZ;
    
    FVoxelFoliageScale();
};

