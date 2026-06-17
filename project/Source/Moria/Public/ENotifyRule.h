#pragma once
#include "CoreMinimal.h"
#include "ENotifyRule.generated.h"

UENUM(BlueprintType)
enum class ENotifyRule : uint8 {
    DisplayForAllOnFirstDiscovery,
    RedisplayOnlyForDiscoverer,
};

