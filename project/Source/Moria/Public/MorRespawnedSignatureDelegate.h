#pragma once
#include "CoreMinimal.h"
#include "MorRespawnedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorRespawnedSignature, AActor*, RespawnedActor);

