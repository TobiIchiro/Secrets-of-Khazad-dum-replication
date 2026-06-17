#pragma once
#include "CoreMinimal.h"
#include "OnWorldTargetSpawnedDelegate.generated.h"

class AFGKBaseCharacter;
class AFGKWorldTargetingActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWorldTargetSpawned, AFGKWorldTargetingActor*, WorldTarget, AFGKBaseCharacter*, Owner);

