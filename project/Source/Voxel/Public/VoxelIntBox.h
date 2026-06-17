#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelIntBox.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelIntBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Max;
    
    FVoxelIntBox();
};

