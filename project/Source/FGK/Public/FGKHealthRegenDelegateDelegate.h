#pragma once
#include "CoreMinimal.h"
#include "FGKHealthRegenDelegateDelegate.generated.h"

class UFGKHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGKHealthRegenDelegate, UFGKHealthComponent*, HealthComp);

