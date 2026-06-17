#pragma once
#include "CoreMinimal.h"
#include "MorAIChallengeSpawnerEventDelegate.generated.h"

class AMorAIController;
class AMorCharacter;
class UMorAIChallengeSpawnsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorAIChallengeSpawnerEvent, UMorAIChallengeSpawnsComponent*, ChallengeSpawnerComponent, AMorCharacter*, SpawnedCharacter, AMorAIController*, SpawnedController);

