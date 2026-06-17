#pragma once
#include "CoreMinimal.h"
#include "VoxelDynamicSubsystemProxy.h"
#include "VoxelRendererSubsystemProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelRendererSubsystemProxy : public UVoxelDynamicSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelRendererSubsystemProxy();

};

