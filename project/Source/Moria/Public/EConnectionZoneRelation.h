#pragma once
#include "CoreMinimal.h"
#include "EConnectionZoneRelation.generated.h"

UENUM(BlueprintType)
enum class EConnectionZoneRelation : uint8 {
    ZoneInternal,
    ZoneExternal,
    ValidateOnly,
};

