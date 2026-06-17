#pragma once
#include "CoreMinimal.h"
#include "VoxelIntBox.h"
#include "ChunkDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FChunkDynamicDelegate, FVoxelIntBox, Bounds);

