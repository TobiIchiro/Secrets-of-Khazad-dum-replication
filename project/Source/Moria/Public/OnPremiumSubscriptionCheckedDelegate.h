#pragma once
#include "CoreMinimal.h"
#include "OnPremiumSubscriptionCheckedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPremiumSubscriptionChecked, bool, IsPremium);

