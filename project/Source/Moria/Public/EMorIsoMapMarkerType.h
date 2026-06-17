#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapMarkerType.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapMarkerType : uint8 {
    None,
    Player,
    PlayerShadow,
    VerticalInterface,
    Waypoint,
    WaypointShadow,
    GoalVerticalMarker,
    GoalWaypointMarker,
    Count,
};

