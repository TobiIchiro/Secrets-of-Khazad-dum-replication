#pragma once
#include "CoreMinimal.h"
#include "VoxelDataMemoryUsageInMB.generated.h"

USTRUCT(BlueprintType)
struct FVoxelDataMemoryUsageInMB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtyValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtyMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedMaterials;
    
    VOXEL_API FVoxelDataMemoryUsageInMB();
};

