#pragma once
#include "CoreMinimal.h"
#include "PlantedTreeFloraCanGrowStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlantedTreeFloraCanGrowStateChanged, bool, bCanGrow);

