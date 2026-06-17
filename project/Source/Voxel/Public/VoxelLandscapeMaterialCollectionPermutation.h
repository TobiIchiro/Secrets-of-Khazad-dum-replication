#pragma once
#include "CoreMinimal.h"
#include "VoxelLandscapeMaterialCollectionPermutation.generated.h"

USTRUCT(BlueprintType)
struct FVoxelLandscapeMaterialCollectionPermutation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Names[6];
    
    VOXEL_API FVoxelLandscapeMaterialCollectionPermutation();
};
FORCEINLINE uint32 GetTypeHash(const FVoxelLandscapeMaterialCollectionPermutation) { return 0; }

