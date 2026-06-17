#pragma once
#include "CoreMinimal.h"
#include "DamageReceivedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageReceivedSignature, AActor*, Damager, float, DamageAmount);

