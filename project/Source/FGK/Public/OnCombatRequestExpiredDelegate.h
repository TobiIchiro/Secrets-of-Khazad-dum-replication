#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "OnCombatRequestExpiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatRequestExpired, FAIRequestID, RequestID);

