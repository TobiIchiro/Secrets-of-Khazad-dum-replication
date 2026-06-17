#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "InventoryDurabilityChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInventoryDurabilityChangedSignature, const FItemHandle&, Item, float, OldDurability, float, NewDurability);

