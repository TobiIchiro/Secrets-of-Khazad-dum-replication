#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NewBubbleExploredDelegate.generated.h"

class UWorldLayoutBubble;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewBubbleExplored, const FGuid&, PlayerGuid, UWorldLayoutBubble*, Bubble);

