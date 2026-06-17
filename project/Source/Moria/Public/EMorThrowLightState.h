#pragma once
#include "CoreMinimal.h"
#include "EMorThrowLightState.generated.h"

UENUM(BlueprintType)
enum class EMorThrowLightState : uint8 {
    Uninitialized,
    Equipped,
    Dropped,
    Thrown,
};

