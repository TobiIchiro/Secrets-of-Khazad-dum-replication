#pragma once
#include "CoreMinimal.h"
#include "EOptionHandlerState.h"
#include "OnHandlerStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandlerStateChanged, EOptionHandlerState, NewState);

