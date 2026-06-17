#pragma once
#include "CoreMinimal.h"
#include "OnHourTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHourTick, int32, HourOfDay);

