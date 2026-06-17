#pragma once
#include "CoreMinimal.h"
#include "EBubbleState.h"
#include "OnWorldBubbleStateChangedDelegate.generated.h"

class UWorldLayoutBubble;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWorldBubbleStateChanged, const UWorldLayoutBubble*, Bubble, EBubbleState, NewState);

