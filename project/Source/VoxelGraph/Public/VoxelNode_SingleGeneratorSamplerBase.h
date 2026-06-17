#pragma once
#include "CoreMinimal.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelNode_GeneratorSamplerBase.h"
#include "VoxelNode_SingleGeneratorSamplerBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SingleGeneratorSamplerBase : public UVoxelNode_GeneratorSamplerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker Generator;
    
    UVoxelNode_SingleGeneratorSamplerBase();

};

