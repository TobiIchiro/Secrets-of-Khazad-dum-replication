#pragma once
#include "CoreMinimal.h"
#include "MorWaypointData.h"
#include "MorOnWaypointAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnWaypointAdded, const FMorWaypointData&, WaypointData);

