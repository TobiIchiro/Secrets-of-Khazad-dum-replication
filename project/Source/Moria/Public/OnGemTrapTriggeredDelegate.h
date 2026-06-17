#pragma once
#include "CoreMinimal.h"
#include "OnGemTrapTriggeredDelegate.generated.h"

class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGemTrapTriggered, AMorCharacter*, Instigator);

