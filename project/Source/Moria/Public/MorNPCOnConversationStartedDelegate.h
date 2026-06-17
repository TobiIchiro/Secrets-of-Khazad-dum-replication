#pragma once
#include "CoreMinimal.h"
#include "MorNPCConversationTextRowHandle.h"
#include "MorNPCOnConversationStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNPCOnConversationStarted, FMorNPCConversationTextRowHandle, Handle);

