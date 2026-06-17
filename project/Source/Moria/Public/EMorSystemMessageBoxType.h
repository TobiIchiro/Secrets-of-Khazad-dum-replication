#pragma once
#include "CoreMinimal.h"
#include "EMorSystemMessageBoxType.generated.h"

UENUM(BlueprintType)
enum class EMorSystemMessageBoxType : uint8 {
    Ok,
    YesNo,
    OkCancel,
};

