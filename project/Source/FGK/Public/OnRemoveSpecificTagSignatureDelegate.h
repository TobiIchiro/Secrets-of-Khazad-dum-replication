#pragma once
#include "CoreMinimal.h"
#include "OnRemoveSpecificTagSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveSpecificTagSignature, float, Duration);

