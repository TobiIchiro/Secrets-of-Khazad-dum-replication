#pragma once
#include "CoreMinimal.h"
#include "EMorPauseState.generated.h"

UENUM(BlueprintType)
enum class EMorPauseState : uint8 {
    Unavailable,
    Blocked,
    Unpaused,
    Paused,
};

