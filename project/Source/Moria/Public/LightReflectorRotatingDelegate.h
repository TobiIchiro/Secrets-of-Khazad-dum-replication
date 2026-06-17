#pragma once
#include "CoreMinimal.h"
#include "LightReflectorRotatingDelegate.generated.h"

class UMorGameplayLightReflectorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLightReflectorRotating, UMorGameplayLightReflectorComponent*, ModComp, bool, IsRotating);

