#pragma once
#include "CoreMinimal.h"
#include "MorOnNewsfeedReadCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorOnNewsfeedReadComplete, bool, bSuccess, FText, NewsfeedText);

