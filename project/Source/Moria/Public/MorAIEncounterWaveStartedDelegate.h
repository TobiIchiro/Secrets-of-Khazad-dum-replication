#pragma once
#include "CoreMinimal.h"
#include "MorAIEncounterWaveStartedDelegate.generated.h"

class AMorAIWaveEncounter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorAIEncounterWaveStarted, AMorAIWaveEncounter*, Encounter, int32, WaveNumber);

