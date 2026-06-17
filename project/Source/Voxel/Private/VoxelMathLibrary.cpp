#include "VoxelMathLibrary.h"

UVoxelMathLibrary::UVoxelMathLibrary() {
}

void UVoxelMathLibrary::ResetHaltonStream(const FVoxelHaltonStream& Stream) {
}

FVoxelHaltonStream UVoxelMathLibrary::MakeHaltonStream(int32 InitialSeed) {
    return FVoxelHaltonStream{};
}

FVector UVoxelMathLibrary::GetUnitVectorFromRandom(FVector2D Random) {
    return FVector{};
}

FVector UVoxelMathLibrary::GetHalton3D(const FVoxelHaltonStream& Stream) {
    return FVector{};
}

FVector2D UVoxelMathLibrary::GetHalton2D(const FVoxelHaltonStream& Stream) {
    return FVector2D{};
}

float UVoxelMathLibrary::GetHalton1D(const FVoxelHaltonStream& Stream) {
    return 0.0f;
}


