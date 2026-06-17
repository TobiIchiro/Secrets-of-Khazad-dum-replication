#pragma once
#include "CoreMinimal.h"
#include "VoxelLandscapeMaterialCollectionLayer.generated.h"

USTRUCT(BlueprintType)
struct FVoxelLandscapeMaterialCollectionLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    VOXEL_API FVoxelLandscapeMaterialCollectionLayer();
};

