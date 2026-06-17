#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnteredBubbleDelegate.generated.h"

class ACharacter;
class UWorldLayoutBubble;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnteredBubble, ACharacter*, Character, UWorldLayoutBubble*, Bubble);

