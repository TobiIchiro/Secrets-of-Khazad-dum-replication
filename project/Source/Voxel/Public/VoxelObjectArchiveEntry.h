#pragma once
#include "CoreMinimal.h"
#include "VoxelObjectArchiveEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FVoxelObjectArchiveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    VOXEL_API FVoxelObjectArchiveEntry();
};

