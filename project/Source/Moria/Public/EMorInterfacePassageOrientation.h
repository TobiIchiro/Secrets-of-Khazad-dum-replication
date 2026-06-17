#pragma once
#include "CoreMinimal.h"
#include "EMorInterfacePassageOrientation.generated.h"

UENUM(BlueprintType)
enum class EMorInterfacePassageOrientation : uint8 {
    Any,
    Inside,
    Outside,
};

