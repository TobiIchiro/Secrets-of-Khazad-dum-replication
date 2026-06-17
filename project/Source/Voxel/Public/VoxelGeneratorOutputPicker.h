#pragma once
#include "CoreMinimal.h"
#include "VoxelGeneratorOutputPicker.generated.h"

USTRUCT(BlueprintType)
struct FVoxelGeneratorOutputPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    VOXEL_API FVoxelGeneratorOutputPicker();
};

