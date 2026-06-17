#pragma once
#include "CoreMinimal.h"
#include "WasConsumedDelegate.generated.h"

class ACharacter;
class AMorMeal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWasConsumed, ACharacter*, Interactor, bool, bConsumedByNPC, AMorMeal*, Meal);

