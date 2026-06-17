#pragma once
#include "CoreMinimal.h"
#include "EResourceTagSource.generated.h"

UENUM(BlueprintType)
enum class EResourceTagSource : uint8 {
    Custom,
    RoleGatherFilter,
};

