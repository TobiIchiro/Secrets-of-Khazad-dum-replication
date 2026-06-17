#pragma once
#include "CoreMinimal.h"
#include "EMorSaveBlockedPlayerResult.generated.h"

UENUM(BlueprintType)
enum class EMorSaveBlockedPlayerResult : uint8 {
    Updated,
    Unchanged,
    InvalidPlayer,
    FullCapacity,
    Error,
};

