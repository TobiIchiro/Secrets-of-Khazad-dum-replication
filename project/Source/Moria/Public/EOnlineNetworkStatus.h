#pragma once
#include "CoreMinimal.h"
#include "EOnlineNetworkStatus.generated.h"

UENUM(BlueprintType)
enum class EOnlineNetworkStatus : uint8 {
    Active,
    Failed,
};

