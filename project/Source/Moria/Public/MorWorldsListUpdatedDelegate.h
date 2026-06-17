#pragma once
#include "CoreMinimal.h"
#include "MorWorldsListUpdatedDelegate.generated.h"

class UMorWorldSelectItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorWorldsListUpdated, const TArray<UMorWorldSelectItem*>&, Worlds);

