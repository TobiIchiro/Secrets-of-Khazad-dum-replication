#pragma once
#include "CoreMinimal.h"
#include "EMorLayoutConstraintKind.generated.h"

UENUM(BlueprintType)
enum class EMorLayoutConstraintKind : uint8 {
    RouteExistsThrough,
    NoRouteExistsThrough,
    RouteExistsBypassing,
    NoRouteExistsBypassing,
};

