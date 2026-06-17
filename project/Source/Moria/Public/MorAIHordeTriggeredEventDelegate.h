#pragma once
#include "CoreMinimal.h"
#include "MorAIHordeTriggeredEventDelegate.generated.h"

class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAIHordeTriggeredEvent, const AMorCharacter*, TriggeringCharacter);

