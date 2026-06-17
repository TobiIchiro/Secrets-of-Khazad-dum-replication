#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_GetBiomeIndex.generated.h"

class UVoxelFoliageBiomeBase;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetBiomeIndex : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelFoliageBiomeBase* Biome;
    
    UVoxelNode_GetBiomeIndex();

};

