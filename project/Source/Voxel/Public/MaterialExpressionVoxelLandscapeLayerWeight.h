#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpressionLandscapeLayerWeight.h"
#include "MaterialExpressionVoxelLandscapeLayerWeight.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOXEL_API UMaterialExpressionVoxelLandscapeLayerWeight : public UMaterialExpressionLandscapeLayerWeight {
    GENERATED_BODY()
public:
    UMaterialExpressionVoxelLandscapeLayerWeight();

};

