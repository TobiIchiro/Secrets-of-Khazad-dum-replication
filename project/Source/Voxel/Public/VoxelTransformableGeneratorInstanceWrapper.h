#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelTransformableGeneratorInstanceWrapper.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelTransformableGeneratorInstanceWrapper : public UObject {
    GENERATED_BODY()
public:
    UVoxelTransformableGeneratorInstanceWrapper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
};

