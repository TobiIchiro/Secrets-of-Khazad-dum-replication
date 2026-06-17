#pragma once
#include "CoreMinimal.h"
#include "EVoxelSamplerMode.h"
#include "VoxelFloatTexture.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_VoxelTextureSampler.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_VoxelTextureSampler : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBilinearInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSamplerMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelFloatTexture Texture;
    
    UVoxelNode_VoxelTextureSampler();

};

