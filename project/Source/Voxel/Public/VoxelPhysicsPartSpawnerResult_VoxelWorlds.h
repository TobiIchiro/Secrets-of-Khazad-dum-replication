#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelPhysicsPartSpawnerResult.h"
#include "VoxelPhysicsPartSpawnerResult_VoxelWorlds.generated.h"

class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds : public UObject, public IVoxelPhysicsPartSpawnerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVoxelWorld* VoxelWorld;
    
    UVoxelPhysicsPartSpawnerResult_VoxelWorlds();


    // Fix for true pure virtual functions not being implemented
};

