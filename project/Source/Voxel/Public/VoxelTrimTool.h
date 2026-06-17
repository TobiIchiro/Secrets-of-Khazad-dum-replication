#pragma once
#include "CoreMinimal.h"
#include "VoxelToolBase.h"
#include "VoxelTrimTool.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class VOXEL_API UVoxelTrimTool : public UVoxelToolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ToolMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Roughness;
    
    UVoxelTrimTool();

};

