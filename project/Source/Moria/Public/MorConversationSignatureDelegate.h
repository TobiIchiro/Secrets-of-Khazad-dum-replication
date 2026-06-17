#pragma once
#include "CoreMinimal.h"
#include "MorConversationSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorConversationSignature, int32, ConversationID);

