#pragma once
#include "CoreMinimal.h"
#include "VoxelTransformableGenerator.h"
#include "VoxelGraphGeneratorHelper.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXELGRAPH_API UVoxelGraphGeneratorHelper : public UVoxelTransformableGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRangeAnalysis;
    
    UVoxelGraphGeneratorHelper();

};

