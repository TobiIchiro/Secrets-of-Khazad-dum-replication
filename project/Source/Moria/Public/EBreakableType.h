#pragma once
#include "CoreMinimal.h"
#include "EBreakableType.generated.h"

UENUM(BlueprintType)
enum class EBreakableType : uint8 {
    ActorsAndInstances,
    ActorsOnly,
    InstancesOnly,
};

