#pragma once
#include "CoreMinimal.h"
#include "SleepStartedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSleepStartedSignature, int32, NightCount);

