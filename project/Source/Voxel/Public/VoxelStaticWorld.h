#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelStaticWorld.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelStaticWorld : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Meshes;
    
    AVoxelStaticWorld(const FObjectInitializer& ObjectInitializer);

};

