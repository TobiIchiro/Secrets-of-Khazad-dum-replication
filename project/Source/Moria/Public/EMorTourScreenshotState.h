#pragma once
#include "CoreMinimal.h"
#include "EMorTourScreenshotState.generated.h"

UENUM(BlueprintType)
enum class EMorTourScreenshotState : uint8 {
    Idle,
    Facing,
    Shooting,
    Recovering,
};

