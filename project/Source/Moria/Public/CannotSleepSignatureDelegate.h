#pragma once
#include "CoreMinimal.h"
#include "EUnableSleepState.h"
#include "CannotSleepSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCannotSleepSignature, EUnableSleepState, Reason);

