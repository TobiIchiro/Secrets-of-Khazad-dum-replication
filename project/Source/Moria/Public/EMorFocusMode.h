#pragma once
#include "CoreMinimal.h"
#include "EMorFocusMode.generated.h"

UENUM(BlueprintType)
enum class EMorFocusMode : uint8 {
    Mouse,
    Keyboard,
    Gamepad,
};

