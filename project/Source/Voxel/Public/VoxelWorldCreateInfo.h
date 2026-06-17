#pragma once
#include "CoreMinimal.h"
#include "VoxelUncompressedWorldSave.h"
#include "VoxelWorldCreateInfo.generated.h"

class AVoxelWorld;

USTRUCT(BlueprintType)
struct FVoxelWorldCreateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelUncompressedWorldSave SaveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVoxelWorld* DataOverride;
    
    VOXEL_API FVoxelWorldCreateInfo();
};

