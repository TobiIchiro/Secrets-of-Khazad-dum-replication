#pragma once
#include "CoreMinimal.h"
#include "MorMonumentData.h"
#include "MorOnMonumentStageBuiltDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorOnMonumentStageBuiltDelegate, FMorMonumentData, MonumentData);

