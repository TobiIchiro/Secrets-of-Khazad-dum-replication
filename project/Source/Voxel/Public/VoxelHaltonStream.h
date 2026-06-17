#pragma once
#include "CoreMinimal.h"
#include "VoxelHaltonStream.generated.h"

USTRUCT(BlueprintType)
struct FVoxelHaltonStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Seed;
    
    VOXEL_API FVoxelHaltonStream();
};

