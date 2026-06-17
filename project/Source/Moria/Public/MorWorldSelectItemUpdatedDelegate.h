#pragma once
#include "CoreMinimal.h"
#include "MorWorldSelectItemUpdatedDelegate.generated.h"

class UMorWorldSelectItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorWorldSelectItemUpdated, UMorWorldSelectItem*, WorldItem);

