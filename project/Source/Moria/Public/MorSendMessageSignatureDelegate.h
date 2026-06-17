#pragma once
#include "CoreMinimal.h"
#include "MorSendMessageSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMorSendMessageSignature, const FString&, Name, const FText&, Message, int32, SpeakerType);

