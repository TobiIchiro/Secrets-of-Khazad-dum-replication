#pragma once
#include "CoreMinimal.h"
#include "EMorSensitivityType.generated.h"

UENUM(BlueprintType)
enum class EMorSensitivityType : uint8 {
    LookYaw,
    LookPitch,
    AimYaw,
    AimPitch,
    GamepadLookYaw,
    GamepadLookPitch,
    GamepadAimYaw,
    GamepadAimPitch,
};

