#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpressionLandscapeLayerSample.h"
#include "MaterialExpressionVoxelLandscapeLayerSample.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOXEL_API UMaterialExpressionVoxelLandscapeLayerSample : public UMaterialExpressionLandscapeLayerSample {
    GENERATED_BODY()
public:
    UMaterialExpressionVoxelLandscapeLayerSample();

};

