#pragma once
#include "CoreMinimal.h"
#include "MoriaInputReleaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoriaInputReleaseDelegate, float, TimeHeld);

