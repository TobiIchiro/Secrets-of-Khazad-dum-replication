#pragma once
#include "CoreMinimal.h"
#include "EMorBreadcrumbCountStrategy.generated.h"

UENUM(BlueprintType)
enum class EMorBreadcrumbCountStrategy : uint8 {
    Invalid,
    CategoryTag,
    CategoryName,
    UniqueName = 4,
    CategoryTagAndCategoryName = 3,
    CategoryTagAndUniqueName = 5,
    CategoryNameAndUniqueName,
    All,
};

