#pragma once
#include "CoreMinimal.h"
#include "MorSettlementNotificationInfo.h"
#include "MorOnSettlementReadyForLevelUpDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnSettlementReadyForLevelUpDelegate, FMorSettlementNotificationInfo, SettlementInfo);

