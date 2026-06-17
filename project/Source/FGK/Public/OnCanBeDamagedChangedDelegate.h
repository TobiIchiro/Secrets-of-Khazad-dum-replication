#pragma once
#include "CoreMinimal.h"
#include "OnCanBeDamagedChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCanBeDamagedChanged, AActor*, InSelf, bool, bCanBeDamaged);

