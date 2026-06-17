#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorOnSettlementNamedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnSettlementNamedDelegate, FMorSettlementHandle, SettlementHandle);

