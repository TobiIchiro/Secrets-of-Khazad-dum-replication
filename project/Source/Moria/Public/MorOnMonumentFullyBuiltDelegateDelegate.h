#pragma once
#include "CoreMinimal.h"
#include "MorMonumentData.h"
#include "MorOnMonumentFullyBuiltDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorOnMonumentFullyBuiltDelegate, int32, TotalCompletedNum, FMorMonumentData, MonumentData);

