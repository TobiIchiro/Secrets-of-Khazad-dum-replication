#pragma once
#include "CoreMinimal.h"
#include "EMorSessionSearchResultType.generated.h"

UENUM(BlueprintType)
enum class EMorSessionSearchResultType : uint8 {
    Success,
    NotFound,
    Duplicate,
    WrongSessionId,
    LogicError,
};

