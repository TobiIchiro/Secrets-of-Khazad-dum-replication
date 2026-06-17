#pragma once
#include "CoreMinimal.h"
#include "GameplayTodLightReceiveUpdatedDelegate.generated.h"

class UMorGameplayTodLightComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayTodLightReceiveUpdated, UMorGameplayTodLightComponent*, Comp);

