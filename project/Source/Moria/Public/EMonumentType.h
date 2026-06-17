#pragma once
#include "CoreMinimal.h"
#include "EMonumentType.generated.h"

UENUM(BlueprintType)
enum class EMonumentType : uint8 {
    None,
    Beacon,
    Monument_1,
    Monument_2,
    Monument_3,
    Monument_4,
    RingVault,
    OathRing,
};

