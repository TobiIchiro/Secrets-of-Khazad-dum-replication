#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorSettlementHandle.h"
#include "MorOnSettlementNpcRemovedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorOnSettlementNpcRemovedDelegate, FMorSettlementHandle, SettlementHandle, FGuid, NpcId, int32, SettlementNpcCount);

