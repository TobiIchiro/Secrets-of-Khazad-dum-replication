#pragma once
#include "CoreMinimal.h"
#include "EESTemperatureType.generated.h"

UENUM(BlueprintType)
enum class EESTemperatureType : uint8 {
    FixedTemp,
    DifferenceTemp,
};

