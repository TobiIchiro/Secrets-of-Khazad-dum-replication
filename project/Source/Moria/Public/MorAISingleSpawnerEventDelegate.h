#pragma once
#include "CoreMinimal.h"
#include "MorAISingleSpawnerEventDelegate.generated.h"

class AMorAIController;
class AMorAISavedSingleSpawner;
class AMorCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorAISingleSpawnerEvent, AMorAISavedSingleSpawner*, Spawner, AMorCharacter*, SpawnedCharacter, AMorAIController*, SpawnedController);

