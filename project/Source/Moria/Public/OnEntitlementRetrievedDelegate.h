#pragma once
#include "CoreMinimal.h"
#include "EEntitlementStatus.h"
#include "OnEntitlementRetrievedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEntitlementRetrieved, EEntitlementStatus, Status);

