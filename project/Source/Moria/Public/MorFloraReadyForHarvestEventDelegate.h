#pragma once
#include "CoreMinimal.h"
#include "MorFloraReadyForHarvestEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorFloraReadyForHarvestEvent, int32, NumHarvestable);

