#pragma once
#include "CoreMinimal.h"
#include "MorTipRowHandle.h"
#include "DisplayTipDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplayTip, FMorTipRowHandle, Tip);

