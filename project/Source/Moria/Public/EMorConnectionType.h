#pragma once
#include "CoreMinimal.h"
#include "EMorConnectionType.generated.h"

UENUM(BlueprintType)
enum class EMorConnectionType : uint8 {
    InviteCode,
    IpAndPort,
};

