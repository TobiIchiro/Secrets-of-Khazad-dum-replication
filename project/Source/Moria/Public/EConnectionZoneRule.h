#pragma once
#include "CoreMinimal.h"
#include "EConnectionZoneRule.generated.h"

UENUM(BlueprintType)
enum class EConnectionZoneRule : uint8 {
    Shared,
    BelongsToDestination,
    BelongsToOrigin,
    Parcel,
    Chapter,
};

