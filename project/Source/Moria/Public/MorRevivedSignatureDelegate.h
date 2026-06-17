#pragma once
#include "CoreMinimal.h"
#include "MorRevivedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorRevivedSignature, AActor*, RevivedActor);

