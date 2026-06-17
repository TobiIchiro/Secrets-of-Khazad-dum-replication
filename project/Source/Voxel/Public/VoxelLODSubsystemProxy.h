#pragma once
#include "CoreMinimal.h"
#include "VoxelDynamicSubsystemProxy.h"
#include "VoxelLODSubsystemProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelLODSubsystemProxy : public UVoxelDynamicSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelLODSubsystemProxy();

};

