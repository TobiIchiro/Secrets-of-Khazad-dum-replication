#pragma once
#include "CoreMinimal.h"
#include "ZoomStartedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoomStartedSignature, FText, BubbleName);

