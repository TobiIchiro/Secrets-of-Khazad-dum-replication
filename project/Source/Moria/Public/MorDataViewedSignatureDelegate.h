#pragma once
#include "CoreMinimal.h"
#include "MorDataViewedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorDataViewedSignature, const UClass*, DataClass, const FName&, DataName);

