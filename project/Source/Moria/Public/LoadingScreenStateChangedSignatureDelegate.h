#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenState.h"
#include "LoadingScreenStateChangedSignatureDelegate.generated.h"

class AMorPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoadingScreenStateChangedSignature, AMorPlayerController*, PlayerController, ELoadingScreenState, LoadingScreenState);

