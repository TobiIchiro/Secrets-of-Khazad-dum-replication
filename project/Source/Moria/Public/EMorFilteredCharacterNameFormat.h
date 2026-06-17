#pragma once
#include "CoreMinimal.h"
#include "EMorFilteredCharacterNameFormat.generated.h"

UENUM(BlueprintType)
enum class EMorFilteredCharacterNameFormat : uint8 {
    SimplePlayer,
    FullPlayer,
    SimpleNonPlayer,
    FullNonPlayer,
};

