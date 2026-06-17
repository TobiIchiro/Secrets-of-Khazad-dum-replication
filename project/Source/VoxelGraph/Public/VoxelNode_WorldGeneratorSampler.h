#pragma once
#include "CoreMinimal.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_WorldGeneratorSampler.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_WorldGeneratorSampler : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker WorldGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Seeds;
    
    UVoxelNode_WorldGeneratorSampler();

};

