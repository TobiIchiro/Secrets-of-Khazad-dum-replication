#pragma once
#include "CoreMinimal.h"
#include "ETraceHitType.generated.h"

UENUM(BlueprintType)
enum class ETraceHitType : uint8 {
    Invalid,
    None,
    Floor,
    Wall,
    Snap,
    Water,
    Blocked,
};

