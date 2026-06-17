#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "VoxelIntBox.h"
#include "VoxelPhysicsTools.generated.h"

class AVoxelWorld;
class IVoxelPhysicsPartSpawner;
class UVoxelPhysicsPartSpawner;
class IVoxelPhysicsPartSpawnerResult;
class UVoxelPhysicsPartSpawnerResult;
class UObject;

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelPhysicsTools();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ApplyVoxelPhysics(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>>& Results, AVoxelWorld* World, FVoxelIntBox Bounds, TScriptInterface<IVoxelPhysicsPartSpawner> PartSpawner, int32 MinParts, bool bDebug, bool bHideLatentWarnings);
    
};

