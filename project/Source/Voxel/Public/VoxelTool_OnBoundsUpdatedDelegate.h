#pragma once
#include "CoreMinimal.h"
#include "VoxelIntBox.h"
#include "VoxelTool_OnBoundsUpdatedDelegate.generated.h"

class AVoxelWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoxelTool_OnBoundsUpdated, AVoxelWorld*, World, FVoxelIntBox, Bounds);

