#pragma once
#include "CoreMinimal.h"
#include "EPlayerLoginStatus.h"
#include "OnPlayerLoginStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLoginStatusChanged, EPlayerLoginStatus, LoginStatus);

