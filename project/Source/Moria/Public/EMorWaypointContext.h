#pragma once
#include "CoreMinimal.h"
#include "EMorWaypointContext.generated.h"

UENUM(BlueprintType)
enum class EMorWaypointContext : uint8 {
    Minimap,
    World,
    WorldSettings,
};

