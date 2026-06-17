#pragma once
#include "CoreMinimal.h"
#include "OnHUDActionBarFocusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHUDActionBarFocusChanged, bool, bFocused, int32, Index);

