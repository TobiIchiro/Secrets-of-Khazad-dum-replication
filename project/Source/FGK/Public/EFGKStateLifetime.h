#pragma once
#include "CoreMinimal.h"
#include "EFGKStateLifetime.generated.h"

UENUM(BlueprintType)
enum class EFGKStateLifetime : uint8 {
    Unknown,
    Static,
    Dynamic,
};

