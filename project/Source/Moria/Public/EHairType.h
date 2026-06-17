#pragma once
#include "CoreMinimal.h"
#include "EHairType.generated.h"

UENUM(BlueprintType)
enum class EHairType : uint8 {
    HairType_Undefined,
    HairType_Bald,
    HairType_Straight,
    HairType_Curly,
    HairType_Braided,
};

