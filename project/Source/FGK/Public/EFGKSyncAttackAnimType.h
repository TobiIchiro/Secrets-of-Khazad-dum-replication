#pragma once
#include "CoreMinimal.h"
#include "EFGKSyncAttackAnimType.generated.h"

UENUM(BlueprintType)
enum class EFGKSyncAttackAnimType : uint8 {
    None,
    Master,
    Puppet,
    Cape,
};

