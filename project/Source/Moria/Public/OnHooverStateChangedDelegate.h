#pragma once
#include "CoreMinimal.h"
#include "OnHooverStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHooverStateChanged, bool, bNowEnabled);

