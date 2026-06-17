#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectRemovedDelegate.generated.h"

class UGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayEffectRemoved, TSubclassOf<UGameplayEffect>, EffectClass);

