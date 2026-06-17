#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "OnCollectedSignatureDelegate.generated.h"

class UMorInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCollectedSignature, const FItemCount, Items, const UMorInventoryComponent*, TargetInventory);

