#pragma once
#include "CoreMinimal.h"
#include "OnPlayerNumberChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNumberChanged, int32, DeltaNumber);

