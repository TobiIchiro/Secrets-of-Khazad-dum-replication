#pragma once
#include "CoreMinimal.h"
#include "MorPlayerStateSiegeLocationChangedDelegate.generated.h"

class AMoriaPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorPlayerStateSiegeLocationChanged, AMoriaPlayerState*, PlayerState);

