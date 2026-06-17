#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreenTabChangedEventDelegate.generated.h"

class UFGKUIScreen;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGKUIScreenTabChangedEvent, UFGKUIScreen*, Screen);

