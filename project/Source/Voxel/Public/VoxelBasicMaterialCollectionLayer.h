#pragma once
#include "CoreMinimal.h"
#include "VoxelBasicMaterialCollectionLayer.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FVoxelBasicMaterialCollectionLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LayerMaterial;
    
    VOXEL_API FVoxelBasicMaterialCollectionLayer();
};

