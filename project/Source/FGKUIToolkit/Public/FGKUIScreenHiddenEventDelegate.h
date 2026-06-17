#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreenHiddenEventDelegate.generated.h"

class UFGKUIScreen;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGKUIScreenHiddenEvent, UFGKUIScreen*, Screen);

