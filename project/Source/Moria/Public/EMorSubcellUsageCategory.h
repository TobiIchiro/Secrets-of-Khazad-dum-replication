#pragma once
#include "CoreMinimal.h"
#include "EMorSubcellUsageCategory.generated.h"

UENUM(BlueprintType)
enum class EMorSubcellUsageCategory : uint8 {
    FullyNavigable,
    NoFloor,
    EmptyReserved,
};

