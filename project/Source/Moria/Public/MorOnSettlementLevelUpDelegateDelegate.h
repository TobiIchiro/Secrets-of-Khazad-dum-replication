#pragma once
#include "CoreMinimal.h"
#include "MorSettlementNotificationInfo.h"
#include "MorOnSettlementLevelUpDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnSettlementLevelUpDelegate, FMorSettlementNotificationInfo, SettlementInfo);

