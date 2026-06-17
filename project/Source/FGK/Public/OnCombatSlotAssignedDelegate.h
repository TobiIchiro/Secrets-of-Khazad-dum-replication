#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "OnCombatSlotAssignedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCombatSlotAssigned, FAIRequestID, RequestID, int32, SlotIndex, const FVector&, SlotLocation);

