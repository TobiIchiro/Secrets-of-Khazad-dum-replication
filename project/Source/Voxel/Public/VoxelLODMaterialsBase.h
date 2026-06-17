#pragma once
#include "CoreMinimal.h"
#include "VoxelLODMaterialsBase.generated.h"

USTRUCT(BlueprintType)
struct FVoxelLODMaterialsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartLOD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndLOD;
    
    VOXEL_API FVoxelLODMaterialsBase();
};

