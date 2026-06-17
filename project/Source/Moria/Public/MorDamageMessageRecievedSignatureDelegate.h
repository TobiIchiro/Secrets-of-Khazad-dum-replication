#pragma once
#include "CoreMinimal.h"
#include "MorDamageMessage.h"
#include "MorDamageMessageRecievedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorDamageMessageRecievedSignature, const FMorDamageMessage&, DamageMessage);

