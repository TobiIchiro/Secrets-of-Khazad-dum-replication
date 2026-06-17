#pragma once
#include "CoreMinimal.h"
#include "OnFGKAnimNotifyStateBeginSignatureDelegate.generated.h"

class UAnimSequenceBase;
class UFGKAnimNotifyState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFGKAnimNotifyStateBeginSignature, UFGKAnimNotifyState*, NotifyState, UAnimSequenceBase*, Animation, float, TotalDuration);

