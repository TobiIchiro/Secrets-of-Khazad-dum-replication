#pragma once
#include "CoreMinimal.h"
#include "EBubbleUpdateState.generated.h"

UENUM(BlueprintType)
enum class EBubbleUpdateState : uint8 {
    Activating,
    Loaded,
    Thawing,
    ReadyForGameplay,
    Freezing,
    Unloaded,
    Deactivated,
};

