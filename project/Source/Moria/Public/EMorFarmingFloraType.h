#pragma once
#include "CoreMinimal.h"
#include "EMorFarmingFloraType.generated.h"

UENUM(BlueprintType)
enum class EMorFarmingFloraType : uint8 {
    None,
    Flora,
    SmallTree,
    MediumTree,
    LargeTree,
};

