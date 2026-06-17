#include "VoxelProjectionTools.h"

UVoxelProjectionTools::UVoxelProjectionTools() {
}

FVoxelLineTraceParameters UVoxelProjectionTools::MakeVoxelLineTraceParameters(TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return FVoxelLineTraceParameters{};
}

TArray<FIntVector> UVoxelProjectionTools::GetHitsPositions(const TArray<FVoxelProjectionHit>& Hits) {
    return TArray<FIntVector>();
}

FVector UVoxelProjectionTools::GetHitsAveragePosition(const TArray<FVoxelProjectionHit>& Hits) {
    return FVector{};
}

FVector UVoxelProjectionTools::GetHitsAverageNormal(const TArray<FVoxelProjectionHit>& Hits) {
    return FVector{};
}

int32 UVoxelProjectionTools::FindProjectionVoxelsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelProjectionHit>& Hits, AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector Position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance, bool bHideLatentWarnings) {
    return 0;
}

int32 UVoxelProjectionTools::FindProjectionVoxels(TArray<FVoxelProjectionHit>& Hits, AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector Position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance) {
    return 0;
}

FVoxelSurfaceEditsVoxels UVoxelProjectionTools::CreateSurfaceVoxelsFromHitsWithExactValues(AVoxelWorld* World, const TArray<FVoxelProjectionHit>& Hits) {
    return FVoxelSurfaceEditsVoxels{};
}

FVoxelSurfaceEditsVoxels UVoxelProjectionTools::CreateSurfaceVoxelsFromHits(const TArray<FVoxelProjectionHit>& Hits) {
    return FVoxelSurfaceEditsVoxels{};
}


