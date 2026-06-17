#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinType.generated.h"

UENUM(BlueprintType)
enum class EPlayerJoinType : uint8 {
    InviteCode,
    SessionList,
};

