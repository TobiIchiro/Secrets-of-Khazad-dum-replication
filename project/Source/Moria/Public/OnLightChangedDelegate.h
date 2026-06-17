#pragma once
#include "CoreMinimal.h"
#include "OnLightChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLightChanged, float, LightValue);

