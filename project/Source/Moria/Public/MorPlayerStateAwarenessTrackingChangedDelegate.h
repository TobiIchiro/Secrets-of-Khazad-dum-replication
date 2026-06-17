#pragma once
#include "CoreMinimal.h"
#include "MorPlayerStateAwarenessTrackingChangedDelegate.generated.h"

class AMoriaPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorPlayerStateAwarenessTrackingChanged, AMoriaPlayerState*, PlayerState, bool, bOldAwarenessTrackingValue, bool, bNewAwarenessTrackingValue);

