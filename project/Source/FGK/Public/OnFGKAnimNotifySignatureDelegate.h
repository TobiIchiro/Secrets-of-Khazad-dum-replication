#pragma once
#include "CoreMinimal.h"
#include "OnFGKAnimNotifySignatureDelegate.generated.h"

class UFGKAnimNotify;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFGKAnimNotifySignature, UFGKAnimNotify*, Notify);

