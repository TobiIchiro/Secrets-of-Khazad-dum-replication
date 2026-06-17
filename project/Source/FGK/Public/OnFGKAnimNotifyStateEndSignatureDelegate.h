#pragma once
#include "CoreMinimal.h"
#include "OnFGKAnimNotifyStateEndSignatureDelegate.generated.h"

class UAnimSequenceBase;
class UFGKAnimNotifyState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFGKAnimNotifyStateEndSignature, UFGKAnimNotifyState*, NotifyState, UAnimSequenceBase*, Animation);

