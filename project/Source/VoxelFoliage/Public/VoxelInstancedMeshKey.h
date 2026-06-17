#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VoxelInstancedMeshSettings.h"
#include "VoxelInstancedMeshKey.generated.h"

class AVoxelFoliageActor;
class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FVoxelInstancedMeshKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVoxelFoliageActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelInstancedMeshSettings InstanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataChannels;
    
    VOXELFOLIAGE_API FVoxelInstancedMeshKey();
};

