#pragma once
#include "CoreMinimal.h"
#include "EMorCosmeticSource.generated.h"

UENUM(BlueprintType)
enum class EMorCosmeticSource : uint8 {
    Invalid,
    Free,
    Unlocked,
    Premium,
    Cheat,
};

