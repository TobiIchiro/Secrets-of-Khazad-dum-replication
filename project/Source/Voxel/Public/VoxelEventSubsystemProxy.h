#pragma once
#include "CoreMinimal.h"
#include "VoxelStaticSubsystemProxy.h"
#include "VoxelEventSubsystemProxy.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelEventSubsystemProxy : public UVoxelStaticSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelEventSubsystemProxy();

};

