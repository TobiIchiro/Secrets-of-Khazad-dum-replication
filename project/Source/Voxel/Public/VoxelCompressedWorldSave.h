#pragma once
#include "CoreMinimal.h"
#include "VoxelObjectArchiveEntry.h"
#include "VoxelCompressedWorldSave.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelCompressedWorldSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelObjectArchiveEntry> Objects;
    
    FVoxelCompressedWorldSave();
};

