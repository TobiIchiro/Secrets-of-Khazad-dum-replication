#pragma once
#include "CoreMinimal.h"
#include "MorLoreRowHandle.h"
#include "MorOnLandmarkWaypointDiscoveredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnLandmarkWaypointDiscovered, const FMorLoreRowHandle&, LoreRowHandle);

