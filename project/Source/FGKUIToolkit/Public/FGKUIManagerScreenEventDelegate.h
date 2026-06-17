#pragma once
#include "CoreMinimal.h"
#include "FGKUIManagerScreenEventDelegate.generated.h"

class UFGKUIScreen;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFGKUIManagerScreenEvent, UFGKUIScreen*, ScreenInstance);

