#pragma once
#include "CoreMinimal.h"
#include "MorWaypointData.h"
#include "MorOnWaypointsRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnWaypointsRemoved, const TArray<FMorWaypointData>&, WaypointDataIndicies);

