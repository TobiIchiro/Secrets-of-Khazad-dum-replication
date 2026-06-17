#pragma once
#include "CoreMinimal.h"
#include "EZoneFilter.generated.h"

UENUM(BlueprintType)
enum class EZoneFilter : uint8 {
    Full,
    CurrentAndAdjacent,
    Current,
};

