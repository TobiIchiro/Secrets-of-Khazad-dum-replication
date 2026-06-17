#pragma once
#include "CoreMinimal.h"
#include "EMorOssLoginFailedReason.generated.h"

UENUM(BlueprintType)
enum class EMorOssLoginFailedReason : uint8 {
    None,
    OssError,
    ParentLoggedOut,
    TimedOut,
    FailedToLogin,
    Offline,
    NotSignedIn,
};

