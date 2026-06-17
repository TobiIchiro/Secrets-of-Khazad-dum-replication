#pragma once
#include "CoreMinimal.h"
#include "EVoxelSamplerMode.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_TextureSampler.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_TextureSampler : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBilinearInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSamplerMode Mode;
    
    UVoxelNode_TextureSampler();

};

