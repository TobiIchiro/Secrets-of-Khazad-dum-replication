#pragma once
#include "CoreMinimal.h"
#include "VoxelSeedNode.h"
#include "VoxelNode_MakeSeeds.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_MakeSeeds : public UVoxelSeedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOutputs;
    
    UVoxelNode_MakeSeeds();

};

