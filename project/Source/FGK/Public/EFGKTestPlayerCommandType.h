#pragma once
#include "CoreMinimal.h"
#include "EFGKTestPlayerCommandType.generated.h"

UENUM(BlueprintType)
enum class EFGKTestPlayerCommandType : uint8 {
    Move,
    Teleport,
};

