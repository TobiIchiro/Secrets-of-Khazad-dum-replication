#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "InventoryChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryChangedSignature, const FItemHandle&, Item);

