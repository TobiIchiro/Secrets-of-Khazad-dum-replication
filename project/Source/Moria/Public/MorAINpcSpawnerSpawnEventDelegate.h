#pragma once
#include "CoreMinimal.h"
#include "MorAINpcSpawnerSpawnEventDelegate.generated.h"

class AMorAIController;
class AMorCharacter;
class UMorNPCStorySpawnerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorAINpcSpawnerSpawnEvent, UMorNPCStorySpawnerComponent*, SpawnerComponent, AMorCharacter*, SpawnedCharacter, AMorAIController*, SpawnedController);

