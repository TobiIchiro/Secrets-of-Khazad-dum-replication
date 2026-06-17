#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "Templates/SubclassOf.h"
#include "ItemAddedGroupedSignatureDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FItemAddedGroupedSignature, const FItemHandle&, Item, TSubclassOf<AInventoryItem>, ItemClass, int32, AmountAdded, int32, TotalCount, bool, bParentContainerWasRecentlyAdded);

