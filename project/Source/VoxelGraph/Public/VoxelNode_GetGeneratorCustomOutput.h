#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_SingleGeneratorSamplerBase.h"
#include "VoxelNode_GetGeneratorCustomOutput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetGeneratorCustomOutput : public UVoxelNode_SingleGeneratorSamplerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputName;
    
public:
    UVoxelNode_GetGeneratorCustomOutput();

};

