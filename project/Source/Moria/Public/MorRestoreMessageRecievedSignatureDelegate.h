#pragma once
#include "CoreMinimal.h"
#include "MorRestoreMessage.h"
#include "MorRestoreMessageRecievedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorRestoreMessageRecievedSignature, const FMorRestoreMessage&, RestoreMessage);

