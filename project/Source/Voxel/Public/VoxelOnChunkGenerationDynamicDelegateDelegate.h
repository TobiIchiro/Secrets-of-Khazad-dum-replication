#pragma once
#include "CoreMinimal.h"
#include "VoxelIntBox.h"
#include "VoxelOnChunkGenerationDynamicDelegateDelegate.generated.h"

class AVoxelWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FVoxelOnChunkGenerationDynamicDelegate, AVoxelWorld*, World, FVoxelIntBox, Bounds);

