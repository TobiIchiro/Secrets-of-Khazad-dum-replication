#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpressionLandscapeLayerBlend.h"
#include "MaterialExpressionVoxelLandscapeLayerBlend.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOXEL_API UMaterialExpressionVoxelLandscapeLayerBlend : public UMaterialExpressionLandscapeLayerBlend {
    GENERATED_BODY()
public:
    UMaterialExpressionVoxelLandscapeLayerBlend();

};

