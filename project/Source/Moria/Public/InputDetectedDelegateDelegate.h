#pragma once
#include "CoreMinimal.h"
#include "EInputType.h"
#include "InputDetectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputDetectedDelegate, EInputType, Type);

