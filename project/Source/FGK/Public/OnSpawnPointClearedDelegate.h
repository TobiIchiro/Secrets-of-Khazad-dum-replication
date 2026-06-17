#pragma once
#include "CoreMinimal.h"
#include "OnSpawnPointClearedDelegate.generated.h"

class AFGKAISpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnPointCleared, AFGKAISpawnPoint*, SpawnPoint);

