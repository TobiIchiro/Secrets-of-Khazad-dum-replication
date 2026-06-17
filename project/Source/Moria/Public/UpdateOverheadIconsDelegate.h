#pragma once
#include "CoreMinimal.h"
#include "EMorOverheadIndicatorRange.h"
#include "EMorOverheadIndicatorState.h"
#include "UpdateOverheadIconsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateOverheadIcons, EMorOverheadIndicatorState, OverheadStateIcon, EMorOverheadIndicatorRange, OverheadRangeIcon);

