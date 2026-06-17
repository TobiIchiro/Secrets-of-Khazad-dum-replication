#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectAppliedDelegate.generated.h"

class UGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayEffectApplied, TSubclassOf<UGameplayEffect>, EffectClass);

