#pragma once
#include "CoreMinimal.h"
#include "MorPlayerStateSiegeEndedDelegate.generated.h"

class AMoriaPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorPlayerStateSiegeEnded, AMoriaPlayerState*, PlayerState);

