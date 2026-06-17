#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorShowLocalPlayerEnteredSettlementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorShowLocalPlayerEnteredSettlementDelegate, FMorSettlementHandle, SettlementHandle);

