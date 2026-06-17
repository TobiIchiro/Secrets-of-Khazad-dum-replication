#pragma once
#include "CoreMinimal.h"
#include "MorAIEncounterFinishedDelegate.generated.h"

class AMorAIWaveEncounter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAIEncounterFinished, AMorAIWaveEncounter*, Encounter);

