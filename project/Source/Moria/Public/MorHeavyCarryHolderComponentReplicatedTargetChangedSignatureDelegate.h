#pragma once
#include "CoreMinimal.h"
#include "MorHeavyCarryHolderComponentReplicatedTargetChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorHeavyCarryHolderComponentReplicatedTargetChangedSignature, AActor*, NewTarget);

