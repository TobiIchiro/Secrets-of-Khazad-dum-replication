#pragma once
#include "CoreMinimal.h"
#include "MorNPCOnConversationSpeechBubbleVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNPCOnConversationSpeechBubbleVisibilityChanged, bool, bIsVisible);

