#pragma once
#include "CoreMinimal.h"
#include "VoxelGraphOutput.h"
#include "VoxelSetterNode.h"
#include "VoxelNode_SetNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_SetNode : public UVoxelSetterNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGraphOutput CachedOutput;
    
public:
    UVoxelNode_SetNode();

};

