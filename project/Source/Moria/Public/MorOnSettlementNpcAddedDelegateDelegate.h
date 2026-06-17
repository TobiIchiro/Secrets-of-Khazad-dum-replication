#pragma once
#include "CoreMinimal.h"
#include "MorNpcUIData.h"
#include "MorSettlementHandle.h"
#include "MorOnSettlementNpcAddedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorOnSettlementNpcAddedDelegate, FMorSettlementHandle, SettlementHandle, FMorNpcUIData, NpcUIData, int32, SettlementNpcCount);

