#pragma once
#include "CoreMinimal.h"
#include "BiomeMapElement.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_BiomeMapSampler.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_BiomeMapSampler : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomeMapElement> Biomes;
    
    UVoxelNode_BiomeMapSampler();

};

