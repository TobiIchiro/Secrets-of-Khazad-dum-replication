#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "ItemEquippedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemEquippedSignature, const FItemHandle&, Item);

