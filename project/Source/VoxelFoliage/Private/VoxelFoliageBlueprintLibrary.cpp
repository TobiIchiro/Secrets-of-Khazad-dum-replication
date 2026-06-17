#include "VoxelFoliageBlueprintLibrary.h"

UVoxelFoliageBlueprintLibrary::UVoxelFoliageBlueprintLibrary() {
}

void UVoxelFoliageBlueprintLibrary::SpawnVoxelSpawnerActorsInArea(TArray<AVoxelFoliageActor*>& OutActors, AVoxelWorld* World, FVoxelIntBox Bounds, EVoxelSpawnerActorSpawnType SpawnType) {
}

AVoxelFoliageActor* UVoxelFoliageBlueprintLibrary::SpawnVoxelSpawnerActorByInstanceIndex(AVoxelWorld* World, UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32 InstanceIndex) {
    return NULL;
}

void UVoxelFoliageBlueprintLibrary::LoadFromSpawnersSave(AVoxelWorld* World, const FVoxelFoliageSave& Save) {
}

FVoxelFoliageSave UVoxelFoliageBlueprintLibrary::GetSpawnersSave(AVoxelWorld* World) {
    return FVoxelFoliageSave{};
}

void UVoxelFoliageBlueprintLibrary::AddInstances(AVoxelWorld* World, const TArray<FTransform>& Transforms, const TArray<float>& CustomData, FVoxelInstancedMeshKey MeshKey, FVector FloatingDetectionOffset) {
}


