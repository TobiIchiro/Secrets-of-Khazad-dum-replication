#pragma once
#include "CoreMinimal.h"
#include "MorAIEncounterWaveEndedDelegate.generated.h"

class AMorAIWaveEncounter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorAIEncounterWaveEnded, AMorAIWaveEncounter*, Encounter, int32, WaveNumber);

