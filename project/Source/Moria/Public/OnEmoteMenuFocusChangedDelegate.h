#pragma once
#include "CoreMinimal.h"
#include "OnEmoteMenuFocusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmoteMenuFocusChanged, bool, bFocused, int32, Index);

