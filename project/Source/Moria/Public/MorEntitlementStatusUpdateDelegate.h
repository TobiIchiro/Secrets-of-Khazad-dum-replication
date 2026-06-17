#pragma once
#include "CoreMinimal.h"
#include "MorEntitlementStatus.h"
#include "MorEntitlementStatusUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorEntitlementStatusUpdate, const FName&, EntitlementID, const FMorEntitlementStatus&, Status);

