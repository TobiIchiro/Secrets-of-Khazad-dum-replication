#pragma once
#include "CoreMinimal.h"
#include "MorAIBossEventDelegate.generated.h"

class UMorAIBossComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAIBossEvent, UMorAIBossComponent*, BossComponent);

