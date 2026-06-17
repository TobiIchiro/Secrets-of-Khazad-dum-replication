#pragma once
#include "CoreMinimal.h"
#include "EProxyRotationMode.generated.h"

UENUM(BlueprintType)
enum class EProxyRotationMode : uint8 {
    None,
    Cardinal,
    Free,
};

