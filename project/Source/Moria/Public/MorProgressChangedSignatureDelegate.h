#pragma once
#include "CoreMinimal.h"
#include "MorProgressRowHandle.h"
#include "MorProgressChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMorProgressChangedSignature, const FMorProgressRowHandle&, ProgressKey, int32, Value);

