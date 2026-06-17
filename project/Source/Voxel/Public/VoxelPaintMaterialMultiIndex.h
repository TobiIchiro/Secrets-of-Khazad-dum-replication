#pragma once
#include "CoreMinimal.h"
#include "VoxelPaintMaterial_MaterialCollectionChannel.h"
#include "VoxelPaintMaterialMultiIndex.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPaintMaterialMultiIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterial_MaterialCollectionChannel Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelPaintMaterial_MaterialCollectionChannel> LockedChannels;
    
    VOXEL_API FVoxelPaintMaterialMultiIndex();
};

