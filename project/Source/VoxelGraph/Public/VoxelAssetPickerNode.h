#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelAssetPickerNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelAssetPickerNode : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UVoxelAssetPickerNode();

};

