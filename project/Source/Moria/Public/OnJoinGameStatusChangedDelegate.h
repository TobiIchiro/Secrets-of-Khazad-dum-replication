#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinFailReason.h"
#include "EPlayerJoinStatus.h"
#include "OnJoinGameStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinGameStatusChanged, EPlayerJoinStatus, JoinStatus, EPlayerJoinFailReason, FailReason);

