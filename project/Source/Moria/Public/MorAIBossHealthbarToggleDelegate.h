#pragma once
#include "CoreMinimal.h"
#include "MorAIBossHealthbarToggleDelegate.generated.h"

class UMorAIBossComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorAIBossHealthbarToggle, UMorAIBossComponent*, BossComponent, bool, bShouldShowHealthBar);

