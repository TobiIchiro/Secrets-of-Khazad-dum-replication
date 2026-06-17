#pragma once
#include "CoreMinimal.h"
#include "ExpeditionSecondsCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExpeditionSecondsCountDelegate, int32, NewNumberOfSeconds);

