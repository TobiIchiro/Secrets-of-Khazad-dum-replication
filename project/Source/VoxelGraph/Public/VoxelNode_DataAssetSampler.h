#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_DataAssetSampler.generated.h"

class UVoxelDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_DataAssetSampler : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelDataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBilinearInterpolation;
    
    UVoxelNode_DataAssetSampler();

};

