#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelMultiplayerInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelMultiplayerInterface : public UObject {
    GENERATED_BODY()
public:
    UVoxelMultiplayerInterface();

};

