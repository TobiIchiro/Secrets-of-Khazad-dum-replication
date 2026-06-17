#pragma once
#include "CoreMinimal.h"
#include "EBubbleUnloadState.generated.h"

UENUM(BlueprintType)
enum class EBubbleUnloadState : uint8 {
    Inactive,
    PassageActors,
    UnloadingGroup,
    UnloadVoxels,
    UnloadingVoxels,
    UnloadingLevels,
    Unloaded,
};

