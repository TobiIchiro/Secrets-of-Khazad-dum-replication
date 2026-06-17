#pragma once
#include "CoreMinimal.h"
#include "EMoriaCharacterAction.h"
#include "OnHitEventSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHitEventSignature, AActor*, From, AActor*, To, EMoriaCharacterAction, Action);

