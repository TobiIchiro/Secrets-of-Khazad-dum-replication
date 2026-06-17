#pragma once
#include "CoreMinimal.h"
#include "OnReactionSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReactionSignature, AActor*, ReactingActor);

