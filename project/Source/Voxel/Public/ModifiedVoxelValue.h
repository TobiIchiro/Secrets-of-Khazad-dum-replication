#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModifiedVoxelValue.generated.h"

USTRUCT(BlueprintType)
struct FModifiedVoxelValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewValue;
    
    VOXEL_API FModifiedVoxelValue();
};

