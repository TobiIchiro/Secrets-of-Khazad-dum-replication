#pragma once
#include "CoreMinimal.h"
#include "VoxelStaticSubsystemProxy.h"
#include "VoxelFoliageInterfaceSubsystemProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelFoliageInterfaceSubsystemProxy : public UVoxelStaticSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelFoliageInterfaceSubsystemProxy();

};

