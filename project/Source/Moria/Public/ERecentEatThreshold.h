#pragma once
#include "CoreMinimal.h"
#include "ERecentEatThreshold.generated.h"

UENUM(BlueprintType)
enum class ERecentEatThreshold : uint8 {
    Hungry,
    Starving,
    Custom,
};

