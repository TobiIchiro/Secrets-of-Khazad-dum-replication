#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "VoxelPhysicsPartSpawner.h"
#include "VoxelPhysicsPartSpawner_VoxelWorlds.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConfigureVoxelWorld);

class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsPartSpawner_VoxelWorlds : public UObject, public IVoxelPhysicsPartSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfigureVoxelWorld ConfigureVoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVoxelWorld> VoxelWorldClass;
    
    UVoxelPhysicsPartSpawner_VoxelWorlds();


    // Fix for true pure virtual functions not being implemented
};

