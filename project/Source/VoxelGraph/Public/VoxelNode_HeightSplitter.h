#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelNode_HeightSplitter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_HeightSplitter : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSplits;
    
    UVoxelNode_HeightSplitter();

};

