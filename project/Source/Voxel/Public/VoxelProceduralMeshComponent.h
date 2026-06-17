#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "VoxelIntBox.h"
#include "VoxelProceduralMeshComponent.generated.h"

class AVoxelWorld;
class UBodySetup;
class UStaticMeshComponent;

// Reparented from UModelComponent (not fully exported in UE4.27) to UPrimitiveComponent
UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelProceduralMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetupBeingCooked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld);
    
};

