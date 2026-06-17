#pragma once
#include "CoreMinimal.h"
#include "OnEventSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnEventSignature, FName, EventName, AActor*, Source, float, NewValue, float, Delta);

