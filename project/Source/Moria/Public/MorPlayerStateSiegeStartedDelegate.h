#pragma once
#include "CoreMinimal.h"
#include "MorPlayerStateSiegeStartedDelegate.generated.h"

class AMoriaPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorPlayerStateSiegeStarted, AMoriaPlayerState*, PlayerState);

