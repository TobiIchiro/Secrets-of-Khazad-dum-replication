#pragma once
#include "CoreMinimal.h"
#include "EHostGameFailedReason.h"
#include "EPlayerHostStatus.h"
#include "OnHostGameStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHostGameStatusChanged, EPlayerHostStatus, Status, EHostGameFailedReason, Reason);

