#pragma once
#include "CoreMinimal.h"
#include "OnBreakDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBreak, bool, bPreRuined);

