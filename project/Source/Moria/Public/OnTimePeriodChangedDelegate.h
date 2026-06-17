#pragma once
#include "CoreMinimal.h"
#include "ClockTimePeriod.h"
#include "OnTimePeriodChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimePeriodChanged, FClockTimePeriod, TimePeriod, bool, bQuiet);

