#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpressionLandscapeVisibilityMask.h"
#include "MaterialExpressionVoxelLandscapeVisibilityMask.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOXEL_API UMaterialExpressionVoxelLandscapeVisibilityMask : public UMaterialExpressionLandscapeVisibilityMask {
    GENERATED_BODY()
public:
    UMaterialExpressionVoxelLandscapeVisibilityMask();

};

