#pragma once
#include "CoreMinimal.h"
#include "VoxelGraphMacroPin.h"
#include "VoxelNode.h"
#include "VoxelGraphMacroInputOutputNode.generated.h"

class UVoxelGraphMacro;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelGraphMacroInputOutputNode : public UVoxelNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelGraphMacroPin> Pins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelGraphMacro* Macro;
    
    UVoxelGraphMacroInputOutputNode();

};

