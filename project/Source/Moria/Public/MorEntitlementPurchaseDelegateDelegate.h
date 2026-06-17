#pragma once
#include "CoreMinimal.h"
#include "EMorEntitlementPurchaseResult.h"
#include "MorEntitlementStatus.h"
#include "MorEntitlementPurchaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorEntitlementPurchaseDelegate, const FName&, EntitlementID, EMorEntitlementPurchaseResult, Result, const FMorEntitlementStatus&, Status);

