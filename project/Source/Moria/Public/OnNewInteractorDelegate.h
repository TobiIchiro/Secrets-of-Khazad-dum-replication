#pragma once
#include "CoreMinimal.h"
#include "OnNewInteractorDelegate.generated.h"

class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewInteractor, AMorCharacter*, Interactor);

