#pragma once
#include "CoreMinimal.h"
#include "VoxelSubsystemProxy.h"
#include "VoxelDynamicSubsystemProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelDynamicSubsystemProxy : public UVoxelSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelDynamicSubsystemProxy();

};

