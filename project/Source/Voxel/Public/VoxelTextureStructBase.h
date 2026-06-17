#pragma once
#include "CoreMinimal.h"
#include "VoxelTextureStructBase.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelTextureStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    FVoxelTextureStructBase();
};

