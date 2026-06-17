#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CloseToGroundSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCloseToGroundSignature, const FHitResult&, Hit);

