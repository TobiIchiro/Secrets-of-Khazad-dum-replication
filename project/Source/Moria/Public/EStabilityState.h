#pragma once
#include "CoreMinimal.h"
#include "EStabilityState.generated.h"

UENUM(BlueprintType)
enum class EStabilityState : uint8 {
    Uninitialized,
    Initializing,
    Stable,
    Unstable,
    Provisional,
    Deconstructed,
};

