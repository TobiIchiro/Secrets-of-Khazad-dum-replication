#pragma once
#include "CoreMinimal.h"
#include "VoxelFoliageBiomeEntry.generated.h"

class UVoxelFoliage;

USTRUCT(BlueprintType)
struct VOXELFOLIAGE_API FVoxelFoliageBiomeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelFoliage* Foliage;
    
    FVoxelFoliageBiomeEntry();
};

