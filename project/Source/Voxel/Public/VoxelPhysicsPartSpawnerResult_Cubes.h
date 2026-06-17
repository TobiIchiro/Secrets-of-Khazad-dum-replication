#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelPhysicsPartSpawnerResult.h"
#include "VoxelPhysicsPartSpawnerResult_Cubes.generated.h"

class AStaticMeshActor;

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsPartSpawnerResult_Cubes : public UObject, public IVoxelPhysicsPartSpawnerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> Cubes;
    
    UVoxelPhysicsPartSpawnerResult_Cubes();


    // Fix for true pure virtual functions not being implemented
};

