#pragma once
#include "CoreMinimal.h"
#include "VoxelIntBox.h"
#include "VoxelIntBoxWithValidity.generated.h"

USTRUCT(BlueprintType)
struct FVoxelIntBoxWithValidity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelIntBox Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
public:
    VOXEL_API FVoxelIntBoxWithValidity();
};

