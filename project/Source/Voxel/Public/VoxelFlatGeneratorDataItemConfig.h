#pragma once
#include "CoreMinimal.h"
#include "VoxelFlatGeneratorDataItemConfig.generated.h"

USTRUCT(BlueprintType)
struct FVoxelFlatGeneratorDataItemConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Smoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtractItems;
    
    VOXEL_API FVoxelFlatGeneratorDataItemConfig();
};

