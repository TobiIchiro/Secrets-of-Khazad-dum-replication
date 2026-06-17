#pragma once
#include "CoreMinimal.h"
#include "GoToSleepSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoToSleepSignature, bool, IsInBed);

