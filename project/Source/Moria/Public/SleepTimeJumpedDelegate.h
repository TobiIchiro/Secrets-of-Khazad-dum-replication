#pragma once
#include "CoreMinimal.h"
#include "SleepTimeJumpedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSleepTimeJumped, float, JumpedGameTimeinSeconds, float, JumpedRealTimeinSeconds);

