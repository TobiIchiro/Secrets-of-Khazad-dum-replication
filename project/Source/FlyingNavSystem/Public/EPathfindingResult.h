#pragma once
#include "CoreMinimal.h"
#include "EPathfindingResult.generated.h"

UENUM(BlueprintType)
enum class EPathfindingResult : uint8 {
    Invalid,
    Error,
    Fail,
    Success,
    RecastError,
    Null,
};

