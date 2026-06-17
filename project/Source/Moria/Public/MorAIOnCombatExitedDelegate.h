#pragma once
#include "CoreMinimal.h"
#include "MorAIOnCombatExitedDelegate.generated.h"

class AMorAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAIOnCombatExited, AMorAIController*, AIController);

