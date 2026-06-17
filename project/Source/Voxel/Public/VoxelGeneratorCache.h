#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelTransformableGeneratorPicker.h"
#include "VoxelGeneratorCache.generated.h"

class UVoxelGeneratorInstanceWrapper;
class UVoxelTransformableGeneratorInstanceWrapper;

UCLASS(Blueprintable)
class VOXEL_API UVoxelGeneratorCache : public UObject {
    GENERATED_BODY()
public:
    UVoxelGeneratorCache();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker Picker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker Picker) const;
    
};

