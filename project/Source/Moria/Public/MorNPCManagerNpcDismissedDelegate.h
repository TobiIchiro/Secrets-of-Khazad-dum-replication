#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorNPCManagerNpcDismissedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNPCManagerNpcDismissed, FGuid, NpcGuid);

