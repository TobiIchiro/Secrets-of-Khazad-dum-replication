#pragma once
#include "CoreMinimal.h"
#include "VoxelIntBox.h"
#include "VoxelDataItemConstructionInfo.generated.h"

class UVoxelGeneratorInstanceWrapper;

USTRUCT(BlueprintType)
struct FVoxelDataItemConstructionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelGeneratorInstanceWrapper* Generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelIntBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mask;
    
    VOXEL_API FVoxelDataItemConstructionInfo();
};

