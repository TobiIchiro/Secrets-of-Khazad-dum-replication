#pragma once
#include "CoreMinimal.h"
#include "MorDoorLoreTodEventDelegate.generated.h"

class UMorDoorLoreTodLightComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorDoorLoreTodEvent, UMorDoorLoreTodLightComponent*, Comp);

