#pragma once
#include "CoreMinimal.h"
#include "EDirtPlugInterfaceType.generated.h"

UENUM(BlueprintType)
enum class EDirtPlugInterfaceType : uint8 {
    Standard,
    Wide,
    Tall,
};

