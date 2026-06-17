#pragma once
#include "CoreMinimal.h"
#include "VoxelFoliageSpawnSettings.h"
#include "VoxelFoliageBiomeTypeEntry.generated.h"

USTRUCT(BlueprintType)
struct VOXELFOLIAGE_API FVoxelFoliageBiomeTypeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelFoliageSpawnSettings SpawnSettings;
    
    FVoxelFoliageBiomeTypeEntry();
};

