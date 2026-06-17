#pragma once
#include "CoreMinimal.h"
#include "EVoxelAssetActorPreviewUpdateType.generated.h"

UENUM()
enum class EVoxelAssetActorPreviewUpdateType : int32 {
    Manually,
    EndOfMove,
    RealTime,
};

