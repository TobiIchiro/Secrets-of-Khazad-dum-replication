#pragma once
#include "CoreMinimal.h"
#include "MorAnyItemRowHandle.h"
#include "MorItemDiscoveredSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorItemDiscoveredSignature, const FMorAnyItemRowHandle&, ItemHandle, AActor*, Discoverer);

