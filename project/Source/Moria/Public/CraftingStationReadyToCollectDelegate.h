#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "CraftingStationReadyToCollectDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraftingStationReadyToCollect, const FItemCount&, AddedItem);

