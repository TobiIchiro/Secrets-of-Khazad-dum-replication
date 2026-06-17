#pragma once
#include "CoreMinimal.h"
#include "EVoxelNoiseInterpolation.h"
#include "VoxelRange.h"
#include "VoxelNodeWithContext.h"
#include "VoxelNode_NoiseNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_NoiseNode : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelNoiseInterpolation Interpolation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumberOfSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelRange> OutputRanges;
    
    UVoxelNode_NoiseNode();

};

