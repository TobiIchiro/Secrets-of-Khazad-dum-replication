#pragma once
#include "CoreMinimal.h"
#include "VoxelBoolVector.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelBoolVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZ;
    
    FVoxelBoolVector();
};

