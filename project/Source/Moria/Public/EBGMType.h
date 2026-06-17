#pragma once
#include "CoreMinimal.h"
#include "EBGMType.generated.h"

UENUM(BlueprintType)
enum class EBGMType : uint8 {
    None,
    Roaming,
    AtHome,
    Combat,
};

