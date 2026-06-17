#pragma once
#include "CoreMinimal.h"
#include "VoxelNode.h"
#include "VoxelGraphMacroNode.generated.h"

class UVoxelGraphMacro;

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelGraphMacroNode : public UVoxelNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelGraphMacro* Macro;
    
    UVoxelGraphMacroNode();

};

