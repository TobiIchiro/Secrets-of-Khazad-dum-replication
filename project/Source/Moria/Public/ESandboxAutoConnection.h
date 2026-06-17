#pragma once
#include "CoreMinimal.h"
#include "ESandboxAutoConnection.generated.h"

UENUM(BlueprintType)
enum class ESandboxAutoConnection : uint8 {
    All,
    Primary,
    Single,
    None,
};

