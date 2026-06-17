#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Templates/SubclassOf.h"
#include "VoxelColorTexture.h"
#include "VoxelFloatTexture.h"
#include "VoxelGeneratorInit.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelTransformableGeneratorPicker.h"
#include "VoxelGeneratorTools.generated.h"

class UObject;
class UVoxelGenerator;
class UVoxelGeneratorInstanceWrapper;
class UVoxelTransformableGenerator;
class UVoxelTransformableGeneratorInstanceWrapper;

UCLASS(Blueprintable)
class VOXEL_API UVoxelGeneratorTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelGeneratorTools();

    UFUNCTION(BlueprintCallable)
    static bool SetTransformableGeneratorParameter(const FVoxelTransformableGeneratorPicker& Picker, FName UniqueName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGeneratorParameter(const FVoxelGeneratorPicker& Picker, FName UniqueName, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromObject(UVoxelTransformableGenerator* Generator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromClass(TSubclassOf<UVoxelTransformableGenerator> GeneratorClass);
    
    UFUNCTION(BlueprintCallable)
    static UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelGeneratorPicker MakeGeneratorPickerFromObject(UVoxelGenerator* Generator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelGeneratorPicker MakeGeneratorPickerFromClass(TSubclassOf<UVoxelGenerator> GeneratorClass);
    
    UFUNCTION(BlueprintCallable)
    static UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_TransformableGeneratorPicker(FVoxelTransformableGeneratorPicker GeneratorPicker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_GeneratorPicker(FVoxelGeneratorPicker GeneratorPicker);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CreateFloatTextureFromGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFloatTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CreateFloatTextureFromGenerator(FVoxelFloatTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CreateColorTextureFromGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelColorTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CreateColorTextureFromGenerator(FVoxelColorTexture& OutTexture, UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY);
    
};

