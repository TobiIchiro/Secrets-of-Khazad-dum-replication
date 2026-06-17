#pragma once
#include "CoreMinimal.h"
#include "OnNatTypeRetrievedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNatTypeRetrieved, int32, NatType);

