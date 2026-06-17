#pragma once
#include "CoreMinimal.h"
#include "VoxelAssetPickerNode.h"
#include "VoxelNode_GetMaterialCollectionIndex.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetMaterialCollectionIndex : public UVoxelAssetPickerNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UVoxelNode_GetMaterialCollectionIndex();

};

