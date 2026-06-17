#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelPhysicsPartSpawner.h"
#include "VoxelPhysicsPartSpawner_GetVoxels.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsPartSpawner_GetVoxels : public UObject, public IVoxelPhysicsPartSpawner {
    GENERATED_BODY()
public:
    UVoxelPhysicsPartSpawner_GetVoxels();


    // Fix for true pure virtual functions not being implemented
};

