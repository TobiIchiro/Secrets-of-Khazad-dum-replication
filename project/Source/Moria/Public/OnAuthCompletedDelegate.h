#pragma once
#include "CoreMinimal.h"
#include "ELoginFailedReason.h"
#include "EMorOssLoginFailedReason.h"
#include "OnAuthCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnAuthCompleted, bool, bIsSuccessful, ELoginFailedReason, Reason, EMorOssLoginFailedReason, OssReason);

