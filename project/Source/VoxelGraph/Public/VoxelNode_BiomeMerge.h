#pragma once
#include "CoreMinimal.h"
#include "VoxelNode.h"
#include "VoxelNode_BiomeMerge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_BiomeMerge : public UVoxelNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Biomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UVoxelNode_BiomeMerge();

};

