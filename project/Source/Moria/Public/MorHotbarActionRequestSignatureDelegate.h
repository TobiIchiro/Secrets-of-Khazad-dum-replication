#pragma once
#include "CoreMinimal.h"
#include "EMorItemHotbarBehavior.h"
#include "MorHotbarActionRequestSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorHotbarActionRequestSignature, int32, HotbarIndex, EMorItemHotbarBehavior, Behavior);

