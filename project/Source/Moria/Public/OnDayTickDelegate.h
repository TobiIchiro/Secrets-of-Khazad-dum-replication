#pragma once
#include "CoreMinimal.h"
#include "OnDayTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDayTick, int32, Day);

