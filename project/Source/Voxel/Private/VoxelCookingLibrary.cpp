#include "VoxelCookingLibrary.h"

UVoxelCookingLibrary::UVoxelCookingLibrary() {
}

FVoxelCookingSettings UVoxelCookingLibrary::MakeVoxelCookingSettingsFromVoxelWorld(AVoxelWorld* World) {
    return FVoxelCookingSettings{};
}

void UVoxelCookingLibrary::LoadCookedVoxelData(FVoxelCookedData CookedData, AVoxelWorld* World) {
}

FVoxelCookedData UVoxelCookingLibrary::CookVoxelDataWithSave(FVoxelCookingSettings Settings, FVoxelUncompressedWorldSave Save) {
    return FVoxelCookedData{};
}

FVoxelCookedData UVoxelCookingLibrary::CookVoxelData(FVoxelCookingSettings Settings) {
    return FVoxelCookedData{};
}


