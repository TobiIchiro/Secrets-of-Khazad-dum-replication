#pragma once
#include "CoreMinimal.h"
#include "EMenuAction.generated.h"

UENUM(BlueprintType)
enum class EMenuAction : uint8 {
    Up,
    Down,
    Left,
    Right,
    Next,
    Previous,
    Accept,
    Back,
    Finish,
    Blocked,
    Handled,
    Axis,
};

