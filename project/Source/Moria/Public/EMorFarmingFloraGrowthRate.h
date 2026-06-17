#pragma once
#include "CoreMinimal.h"
#include "EMorFarmingFloraGrowthRate.generated.h"

UENUM(BlueprintType)
enum class EMorFarmingFloraGrowthRate : uint8 {
    None,
    Fast,
    Moderate,
    Slow,
};

