#pragma once
#include "CoreMinimal.h"
#include "EVoxelGeneratorParameterPropertyType.generated.h"

UENUM(BlueprintType)
enum class EVoxelGeneratorParameterPropertyType : uint8 {
    Float,
    Int,
    Bool,
    Name,
    Object,
    Struct,
};

