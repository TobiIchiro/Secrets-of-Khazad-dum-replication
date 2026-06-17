#pragma once
#include "CoreMinimal.h"
#include "EMorEnableByBuildConfig.generated.h"

UENUM(BlueprintType)
enum class EMorEnableByBuildConfig : uint8 {
    None,
    Development,
    Shipping,
};

