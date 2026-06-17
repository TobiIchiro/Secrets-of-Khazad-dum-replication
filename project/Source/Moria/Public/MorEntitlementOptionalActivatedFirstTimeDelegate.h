#pragma once
#include "CoreMinimal.h"
#include "MorEntitlementOptionalActivatedFirstTimeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorEntitlementOptionalActivatedFirstTime, const FName&, EntitlementID);

