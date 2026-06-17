#pragma once
#include "CoreMinimal.h"
#include "EMorLoadLastSaveResult.h"
#include "MorLoadLastSaveFinishedDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorLoadLastSaveFinishedDynamicDelegate, EMorLoadLastSaveResult, Result);

