#pragma once
#include "CoreMinimal.h"
#include "EPlayerLoginStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerLoginStatus : uint8 {
    NotStarted,
    Unavailable,
    OssInProgress,
    OssOffline,
    OssFailed,
    OssUnavailable,
    PragmaInProgress,
    PragmaOffline,
    PragmaFailed,
    PragmaOnline,
    Success,
};

