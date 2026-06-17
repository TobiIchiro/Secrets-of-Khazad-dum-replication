#pragma once
#include "CoreMinimal.h"
#include "EMDifficulty.generated.h"

UENUM(BlueprintType)
enum class EMDifficulty : uint8 {
    None,
    Lowest = 10,
    Low = 20,
    Medium = 30,
    High = 40,
    Highest = 50,
};

