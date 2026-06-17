#pragma once
#include "CoreMinimal.h"
#include "EWaterColliderPlayMode.generated.h"

UENUM(BlueprintType)
enum class EWaterColliderPlayMode : uint8 {
    None = 0,
    Splash = 1,
    Drip,
    SubmergedMotion = 4,
    Plunge = 8,
    Breach = 16,
};

