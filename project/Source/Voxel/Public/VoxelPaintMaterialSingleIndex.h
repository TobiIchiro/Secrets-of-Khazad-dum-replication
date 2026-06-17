#pragma once
#include "CoreMinimal.h"
#include "VoxelPaintMaterial_MaterialCollectionChannel.h"
#include "VoxelPaintMaterialSingleIndex.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPaintMaterialSingleIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterial_MaterialCollectionChannel Channel;
    
    VOXEL_API FVoxelPaintMaterialSingleIndex();
};

