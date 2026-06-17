#pragma once
#include "CoreMinimal.h"
#include "EMNetworkGuard.generated.h"

UENUM(BlueprintType)
enum class EMNetworkGuard : uint8 {
    NONE,
    SERVER_PURE,
    SERVER_CLIENT,
    CLIENT = 4,
};

