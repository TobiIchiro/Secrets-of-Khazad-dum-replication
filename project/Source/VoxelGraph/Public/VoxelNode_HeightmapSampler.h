#pragma once
#include "CoreMinimal.h"
#include "EVoxelSamplerMode.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_HeightmapSampler.generated.h"

class UVoxelHeightmapAssetFloat;
class UVoxelHeightmapAssetUINT16;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_HeightmapSampler : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFloatHeightmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelHeightmapAssetFloat* HeightmapFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelHeightmapAssetUINT16* HeightmapUINT16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSamplerMode SamplerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenter;
    
    UVoxelNode_HeightmapSampler();

};

