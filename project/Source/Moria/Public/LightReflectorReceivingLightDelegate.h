#pragma once
#include "CoreMinimal.h"
#include "LightReflectorReceivingLightDelegate.generated.h"

class UMorGameplayLightReflectorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLightReflectorReceivingLight, UMorGameplayLightReflectorComponent*, ModComp, bool, IsReceiving);

