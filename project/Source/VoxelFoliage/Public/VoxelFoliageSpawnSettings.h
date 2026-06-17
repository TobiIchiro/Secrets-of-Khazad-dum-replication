#pragma once
#include "CoreMinimal.h"
#include "VoxelDistance.h"
#include "VoxelGeneratorOutputPicker.h"
#include "EVoxelFoliageRandomGenerator.h"
#include "EVoxelFoliageSpawnType.h"
#include "VoxelFoliageSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FVoxelFoliageSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelFoliageSpawnType SpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelDistance DistanceBetweenInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelDistance GenerationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelFoliageRandomGenerator RandomGenerator;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteGenerationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorOutputPicker HeightGraphOutputName_HeightOnly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfFloating_HeightOnly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfCovered_HeightOnly;
    
    VOXELFOLIAGE_API FVoxelFoliageSpawnSettings();
};

