#pragma once
#include "CoreMinimal.h"
#include "EVoxelGeneratorParameterContainerType.generated.h"

UENUM(BlueprintType)
enum class EVoxelGeneratorParameterContainerType : uint8 {
    None,
    Array,
    Set,
    Map,
};

