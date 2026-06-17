#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorOnSettlementDataUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnSettlementDataUpdateDelegate, FMorSettlementHandle, SettlementHandle);

