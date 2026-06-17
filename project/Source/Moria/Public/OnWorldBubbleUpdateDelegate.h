#pragma once
#include "CoreMinimal.h"
#include "EBubbleUpdateState.h"
#include "OnWorldBubbleUpdateDelegate.generated.h"

class UWorldLayoutBubble;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWorldBubbleUpdate, const UWorldLayoutBubble*, Bubble, EBubbleUpdateState, NewState);

