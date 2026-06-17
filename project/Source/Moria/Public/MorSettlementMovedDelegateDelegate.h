#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorSettlementMovedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorSettlementMovedDelegate, FMorSettlementHandle, SettlementHandle);

