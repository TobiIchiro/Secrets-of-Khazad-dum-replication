#pragma once
#include "CoreMinimal.h"
#include "MorAINpcSpawnerSimpleEventDelegate.generated.h"

class UMorNPCStorySpawnerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAINpcSpawnerSimpleEvent, UMorNPCStorySpawnerComponent*, SpawnerComponent);

