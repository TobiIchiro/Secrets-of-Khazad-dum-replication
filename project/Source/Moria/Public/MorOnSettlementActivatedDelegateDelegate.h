#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorOnSettlementActivatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnSettlementActivatedDelegate, FMorSettlementHandle, SettlementHandle);

