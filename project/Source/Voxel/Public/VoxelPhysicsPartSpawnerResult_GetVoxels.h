#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelPhysicsPartSpawnerResult.h"
#include "VoxelPositionValueMaterial.h"
#include "VoxelPhysicsPartSpawnerResult_GetVoxels.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsPartSpawnerResult_GetVoxels : public UObject, public IVoxelPhysicsPartSpawnerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelPositionValueMaterial> Voxels;
    
    UVoxelPhysicsPartSpawnerResult_GetVoxels();


    // Fix for true pure virtual functions not being implemented
};

