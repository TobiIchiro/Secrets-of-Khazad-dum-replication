#pragma once
#include "CoreMinimal.h"
#include "EMorProxyPriorityGroup.generated.h"

UENUM(BlueprintType)
enum class EMorProxyPriorityGroup : uint8 {
    Undefined,
    StandAlone,
    Challenges,
    Architectures,
    StandardContainers,
    ZGenerators,
    Assemblages,
    StagingContainers,
    Last = StagingContainers,
};

