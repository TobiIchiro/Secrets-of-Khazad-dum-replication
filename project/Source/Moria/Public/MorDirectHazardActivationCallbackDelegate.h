#pragma once
#include "CoreMinimal.h"
#include "MorDirectHazardActivationCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorDirectHazardActivationCallback, bool, IsActive);

