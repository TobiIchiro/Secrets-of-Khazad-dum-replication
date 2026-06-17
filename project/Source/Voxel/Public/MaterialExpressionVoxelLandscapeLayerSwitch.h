#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpressionLandscapeLayerSwitch.h"
#include "MaterialExpressionVoxelLandscapeLayerSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOXEL_API UMaterialExpressionVoxelLandscapeLayerSwitch : public UMaterialExpressionLandscapeLayerSwitch {
    GENERATED_BODY()
public:
    UMaterialExpressionVoxelLandscapeLayerSwitch();

};

