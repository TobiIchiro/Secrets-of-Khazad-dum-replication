#pragma once
#include "CoreMinimal.h"
#include "LightReflectorModifiedDelegate.generated.h"

class UMorGameplayLightReflectorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLightReflectorModified, UMorGameplayLightReflectorComponent*, ModComp);

