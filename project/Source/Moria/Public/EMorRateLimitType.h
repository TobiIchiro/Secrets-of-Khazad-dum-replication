#pragma once
#include "CoreMinimal.h"
#include "EMorRateLimitType.generated.h"

UENUM()
enum class EMorRateLimitType : int32 {
    None,
    Number,
    Cooldown,
};

