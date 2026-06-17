#pragma once
#include "CoreMinimal.h"
#include "ESaveCompatibility.generated.h"

UENUM(BlueprintType)
enum class ESaveCompatibility : uint8 {
    Compatible,
    Future,
    DevSave,
    DevBuild,
};

