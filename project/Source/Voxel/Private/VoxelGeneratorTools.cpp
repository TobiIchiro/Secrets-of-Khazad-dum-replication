#include "VoxelGeneratorTools.h"
#include "Templates/SubclassOf.h"

UVoxelGeneratorTools::UVoxelGeneratorTools() {
}

bool UVoxelGeneratorTools::SetTransformableGeneratorParameter(const FVoxelTransformableGeneratorPicker& Picker, FName UniqueName, int32 Value) {
    return false;
}

bool UVoxelGeneratorTools::SetGeneratorParameter(const FVoxelGeneratorPicker& Picker, FName UniqueName, int32 Value) {
    return false;
}

FVoxelTransformableGeneratorPicker UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromObject(UVoxelTransformableGenerator* Generator) {
    return FVoxelTransformableGeneratorPicker{};
}

FVoxelTransformableGeneratorPicker UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromClass(TSubclassOf<UVoxelTransformableGenerator> GeneratorClass) {
    return FVoxelTransformableGeneratorPicker{};
}

UVoxelTransformableGeneratorInstanceWrapper* UVoxelGeneratorTools::MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit) {
    return NULL;
}

FVoxelGeneratorPicker UVoxelGeneratorTools::MakeGeneratorPickerFromObject(UVoxelGenerator* Generator) {
    return FVoxelGeneratorPicker{};
}

FVoxelGeneratorPicker UVoxelGeneratorTools::MakeGeneratorPickerFromClass(TSubclassOf<UVoxelGenerator> GeneratorClass) {
    return FVoxelGeneratorPicker{};
}

UVoxelGeneratorInstanceWrapper* UVoxelGeneratorTools::MakeGeneratorInstance(FVoxelGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit) {
    return NULL;
}

bool UVoxelGeneratorTools::IsValid_TransformableGeneratorPicker(FVoxelTransformableGeneratorPicker GeneratorPicker) {
    return false;
}

bool UVoxelGeneratorTools::IsValid_GeneratorPicker(FVoxelGeneratorPicker GeneratorPicker) {
    return false;
}

void UVoxelGeneratorTools::CreateFloatTextureFromGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFloatTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings) {
}

void UVoxelGeneratorTools::CreateFloatTextureFromGenerator(FVoxelFloatTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY) {
}

void UVoxelGeneratorTools::CreateColorTextureFromGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelColorTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings) {
}

void UVoxelGeneratorTools::CreateColorTextureFromGenerator(FVoxelColorTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY) {
}


