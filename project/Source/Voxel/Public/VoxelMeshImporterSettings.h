#pragma once
#include "CoreMinimal.h"
#include "VoxelMeshImporterSettingsBase.h"
#include "VoxelMeshImporterSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelMeshImporterSettings : public FVoxelMeshImporterSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ColorsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UVsMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenderTargetSize;
    
    FVoxelMeshImporterSettings();
};

