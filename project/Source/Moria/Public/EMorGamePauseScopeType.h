#pragma once
#include "CoreMinimal.h"
#include "EMorGamePauseScopeType.generated.h"

UENUM(BlueprintType)
enum class EMorGamePauseScopeType : uint8 {
    None,
    AutoPause,
    ForceUnpause,
    AudioSync,
    Count,
};

