#pragma once
#include "CoreMinimal.h"
#include "MorAIOnCombatEnteredDelegate.generated.h"

class AActor;
class AMorAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorAIOnCombatEntered, AMorAIController*, AIController, AActor*, Target);

