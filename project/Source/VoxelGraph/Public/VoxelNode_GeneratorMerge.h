#pragma once
#include "CoreMinimal.h"
#include "EVoxelMaterialConfig.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelNode_GeneratorSamplerBase.h"
#include "VoxelNode_GeneratorMerge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GeneratorMerge : public UVoxelNode_GeneratorSamplerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Outputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelMaterialConfig MaterialConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelGeneratorPicker> Generators;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UVoxelNode_GeneratorMerge();

};

