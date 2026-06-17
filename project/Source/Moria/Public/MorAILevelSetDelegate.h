#pragma once
#include "CoreMinimal.h"
#include "MorAILevelSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorAILevelSet, uint8, AILevel);

