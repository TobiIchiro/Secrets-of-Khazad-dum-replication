#pragma once
#include "CoreMinimal.h"
#include "EMorBreadcrumbMatchStrategy.generated.h"

UENUM(BlueprintType)
enum class EMorBreadcrumbMatchStrategy : uint8 {
    AnyParent,
    Exact,
};

