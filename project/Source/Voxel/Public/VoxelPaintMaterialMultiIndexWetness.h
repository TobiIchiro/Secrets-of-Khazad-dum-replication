#pragma once
#include "CoreMinimal.h"
#include "VoxelPaintMaterialMultiIndexWetness.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPaintMaterialMultiIndexWetness {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    VOXEL_API FVoxelPaintMaterialMultiIndexWetness();
};

