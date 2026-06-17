#pragma once
#include "CoreMinimal.h"
#include "EFGKDistanceType.generated.h"

UENUM(BlueprintType)
enum class EFGKDistanceType : uint8 {
    THREE_DIMENSIONAL,
    HORIZ_ONLY,
    VERT_ONLY,
    VERT_POSITIVE,
    VERT_NEGATIVE,
    SURFACE_RELATIVE = 250,
    INVALID = 255,
};

