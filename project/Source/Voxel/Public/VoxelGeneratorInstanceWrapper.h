#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGeneratorInstanceWrapper.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelGeneratorInstanceWrapper : public UObject {
    GENERATED_BODY()
public:
    UVoxelGeneratorInstanceWrapper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
};

