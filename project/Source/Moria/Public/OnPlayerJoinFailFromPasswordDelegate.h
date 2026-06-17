#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinFailReason.h"
#include "OnPlayerJoinFailFromPasswordDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerJoinFailFromPassword, EPlayerJoinFailReason, FailReason);

