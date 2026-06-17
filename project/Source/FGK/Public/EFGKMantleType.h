#pragma once
#include "CoreMinimal.h"
#include "EFGKMantleType.generated.h"

UENUM(BlueprintType)
enum class EFGKMantleType : uint8 {
    HighMantle,
    LowMantle,
    FallingCatch,
    INVALID_MANTLE_TYPE = 100,
};

