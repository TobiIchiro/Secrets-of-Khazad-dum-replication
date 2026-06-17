#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorOnSettlementDeactivatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnSettlementDeactivatedDelegate, FMorSettlementHandle, SettlementHandle);

