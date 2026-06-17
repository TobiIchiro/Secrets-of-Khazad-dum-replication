#pragma once
#include "CoreMinimal.h"
#include "EMorOverheadIndicatorState.generated.h"

UENUM(BlueprintType)
enum class EMorOverheadIndicatorState : uint8 {
    Idle,
    Dead,
    Talking,
    Singing,
    TryingToSleep,
    InPauseMenu,
    InInventory,
    AtCraftingStation,
    InBuildMode,
    NoIcon,
};

