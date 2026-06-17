#pragma once
#include "CoreMinimal.h"
#include "VoxelSubsystemProxy.h"
#include "VoxelStaticSubsystemProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelStaticSubsystemProxy : public UVoxelSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelStaticSubsystemProxy();

};

