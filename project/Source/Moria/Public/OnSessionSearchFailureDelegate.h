#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinFailReason.h"
#include "OnSessionSearchFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSearchFailure, EPlayerJoinFailReason, Reason);

