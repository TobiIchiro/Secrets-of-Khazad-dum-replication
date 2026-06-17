#pragma once
#include "CoreMinimal.h"
#include "OnReceiveHitFromLocalAttackerDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveHitFromLocalAttacker, AActor*, Attacker);

