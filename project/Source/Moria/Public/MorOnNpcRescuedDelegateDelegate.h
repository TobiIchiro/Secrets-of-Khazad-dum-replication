#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorOnNpcRescuedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnNpcRescuedDelegate, FGuid, NpcId);

