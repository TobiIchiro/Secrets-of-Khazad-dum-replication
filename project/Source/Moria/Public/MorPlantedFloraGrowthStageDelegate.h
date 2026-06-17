#pragma once
#include "CoreMinimal.h"
#include "EMorGrowthStage.h"
#include "MorPlantedFloraGrowthStageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorPlantedFloraGrowthStage, EMorGrowthStage, GrowthStage);

