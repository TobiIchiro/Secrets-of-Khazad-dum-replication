#pragma once
#include "CoreMinimal.h"
#include "EMorSongExitReason.h"
#include "ForcefullyExitedSongEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FForcefullyExitedSongEvent, const EMorSongExitReason, ExitReason);

