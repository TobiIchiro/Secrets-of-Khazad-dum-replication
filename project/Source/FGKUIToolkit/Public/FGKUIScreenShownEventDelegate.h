#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreenShownEventDelegate.generated.h"

class UFGKUIScreen;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGKUIScreenShownEvent, UFGKUIScreen*, Screen);

