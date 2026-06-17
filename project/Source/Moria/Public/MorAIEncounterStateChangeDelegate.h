#pragma once
#include "CoreMinimal.h"
#include "EMorAIWaveEncounterState.h"
#include "MorAIEncounterStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorAIEncounterStateChange, EMorAIWaveEncounterState, OldState, EMorAIWaveEncounterState, NewState);

