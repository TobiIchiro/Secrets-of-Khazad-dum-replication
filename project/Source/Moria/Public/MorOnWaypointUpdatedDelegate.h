#pragma once
#include "CoreMinimal.h"
#include "MorWaypointData.h"
#include "MorOnWaypointUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnWaypointUpdated, const FMorWaypointData&, WaypointData);

