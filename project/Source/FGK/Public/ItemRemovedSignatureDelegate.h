#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemRemovedSignatureDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemRemovedSignature, TSubclassOf<AInventoryItem>, ItemClass, int32, AmountRemoved, int32, NewTotalCount);

