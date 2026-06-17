#pragma once
#include "CoreMinimal.h"
#include "EMorFreeCameraInputAction.generated.h"

UENUM(BlueprintType)
enum class EMorFreeCameraInputAction : uint8 {
    None,
    AnyKeyPress,
    FocalDistanceDecrease,
    FocalDistanceIncrease,
    DOFDecrease,
    DOFIncrease,
    FOVDecrease,
    FOVIncrease,
    ToggleDwarfVisibility,
    Count,
};

