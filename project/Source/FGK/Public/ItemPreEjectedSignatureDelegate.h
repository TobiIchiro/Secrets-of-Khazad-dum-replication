#pragma once
#include "CoreMinimal.h"
#include "EjectItemProperties.h"
#include "ItemHandle.h"
#include "ItemPreEjectedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemPreEjectedSignature, const FItemHandle&, Item, const int32, Count, const FEjectItemProperties&, EjectProperties);

