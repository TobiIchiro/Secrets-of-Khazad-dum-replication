#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "OnCombatSlotCanceledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCombatSlotCanceled, FAIRequestID, RequestID, int32, SlotIndex);

