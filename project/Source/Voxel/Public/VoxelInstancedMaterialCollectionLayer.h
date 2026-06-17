#pragma once
#include "CoreMinimal.h"
#include "VoxelInstancedMaterialCollectionLayer.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FVoxelInstancedMaterialCollectionLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LayerMaterialInstance;
    
    VOXEL_API FVoxelInstancedMaterialCollectionLayer();
};

