#pragma once
#include "CoreMinimal.h"
#include "VoxelObjectArchiveEntry.h"
#include "VoxelUncompressedWorldSave.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelUncompressedWorldSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelObjectArchiveEntry> Objects;
    
    FVoxelUncompressedWorldSave();
};

