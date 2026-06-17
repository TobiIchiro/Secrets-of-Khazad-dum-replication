#pragma once
#include "CoreMinimal.h"
#include "VoxelToolWithAlignment.h"
#include "VoxelSphereToolBase.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelSphereToolBase : public UVoxelToolWithAlignment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ToolMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SphereMesh;
    
    UVoxelSphereToolBase();

};

