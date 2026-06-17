#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "ItemEffectChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemEffectChangedSignature, const FItemHandle&, Item);

