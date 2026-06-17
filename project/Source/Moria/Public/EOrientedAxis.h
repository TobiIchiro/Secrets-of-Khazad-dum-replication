#pragma once
#include "CoreMinimal.h"
#include "EOrientedAxis.generated.h"

UENUM(BlueprintType)
enum class EOrientedAxis : uint8 {
    None,
    XPos,
    YPos,
    ZPos,
    XNeg,
    YNeg,
    ZNeg,
    Up = ZPos,
    Down = ZNeg,
    Forward = XPos,
    Backward = XNeg,
    Right = YPos,
    Left = YNeg,
};

