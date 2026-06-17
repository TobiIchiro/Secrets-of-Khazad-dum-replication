#pragma once
#include "CoreMinimal.h"
#include "MorAIBossHealthChangeDelegate.generated.h"

class UMorAIBossComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMorAIBossHealthChange, UMorAIBossComponent*, BossComponent, float, PreviousHealth, float, NewHealth, float, MaxHealth);

