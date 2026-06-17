#pragma once
#include "CoreMinimal.h"
#include "EFGKConditionGroupType.generated.h"

UENUM(BlueprintType)
enum class EFGKConditionGroupType : uint8 {
    AND,
    OR,
};

