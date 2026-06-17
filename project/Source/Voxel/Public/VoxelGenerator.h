#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGenerator.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelGenerator : public UObject {
    GENERATED_BODY()
public:
    UVoxelGenerator();

};

