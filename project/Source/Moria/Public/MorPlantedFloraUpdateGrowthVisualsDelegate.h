#pragma once
#include "CoreMinimal.h"
#include "EMorGrowthStage.h"
#include "MorPlantedFloraUpdateGrowthVisualsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorPlantedFloraUpdateGrowthVisuals, EMorGrowthStage, GrowthStage, int32, BaseHarvestableCount);

