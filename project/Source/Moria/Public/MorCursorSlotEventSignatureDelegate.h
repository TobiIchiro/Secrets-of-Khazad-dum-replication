#pragma once
#include "CoreMinimal.h"
#include "MorCursorSlotEventSignatureDelegate.generated.h"

class UMorCursorSlotComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorCursorSlotEventSignature, UMorCursorSlotComponent*, Source);

