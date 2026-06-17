#pragma once
#include "CoreMinimal.h"
#include "EHairLength.generated.h"

UENUM(BlueprintType)
enum class EHairLength : uint8 {
    HairLength_Undefined,
    HairLength_Zero,
    HairLength_Short,
    HairLength_Middle,
    HairLength_Long,
};

