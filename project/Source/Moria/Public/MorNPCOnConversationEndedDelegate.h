#pragma once
#include "CoreMinimal.h"
#include "MorNPCConversationTextRowHandle.h"
#include "MorNPCOnConversationEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorNPCOnConversationEnded, FMorNPCConversationTextRowHandle, Handle);

