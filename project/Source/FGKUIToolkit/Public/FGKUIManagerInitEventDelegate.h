#pragma once
#include "CoreMinimal.h"
#include "FGKUIManagerInitEventDelegate.generated.h"

class UFGKUIManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFGKUIManagerInitEvent, UFGKUIManager*, UIManager);

