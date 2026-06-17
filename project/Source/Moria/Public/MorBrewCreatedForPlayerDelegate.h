#pragma once
#include "CoreMinimal.h"
#include "MorBrewCreatedForPlayerDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorBrewCreatedForPlayer, ACharacter*, Player);

