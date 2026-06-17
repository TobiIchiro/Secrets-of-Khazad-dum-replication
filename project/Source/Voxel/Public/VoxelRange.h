#pragma once
#include "CoreMinimal.h"
#include "VoxelRange.generated.h"

USTRUCT(BlueprintType)
struct FVoxelRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Max;
    
    VOXEL_API FVoxelRange();
};

