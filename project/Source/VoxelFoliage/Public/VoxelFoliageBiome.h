#pragma once
#include "CoreMinimal.h"
#include "VoxelFoliageBiomeBase.h"
#include "VoxelFoliageBiomeEntry.h"
#include "VoxelFoliageBiome.generated.h"

class UVoxelFoliageBiomeType;

UCLASS(Blueprintable)
class VOXELFOLIAGE_API UVoxelFoliageBiome : public UVoxelFoliageBiomeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelFoliageBiomeType* Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelFoliageBiomeEntry> Entries;
    
    UVoxelFoliageBiome();

};

