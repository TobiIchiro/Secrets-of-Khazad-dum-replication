#pragma once
#include "CoreMinimal.h"
#include "EMorAIWaveEncounterState.h"
#include "MorPlayerStateHordeStateChangedDelegate.generated.h"

class AMoriaPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorPlayerStateHordeStateChanged, AMoriaPlayerState*, PlayerState, EMorAIWaveEncounterState, NewState, EMorAIWaveEncounterState, OldState);

