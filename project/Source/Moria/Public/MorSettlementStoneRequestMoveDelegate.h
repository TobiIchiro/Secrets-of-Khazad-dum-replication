#pragma once
#include "CoreMinimal.h"
#include "MorSettlementHandle.h"
#include "MorSettlementStoneRequestMoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorSettlementStoneRequestMove, FMorSettlementHandle, SettlementToMove);

