#pragma once
#include "CoreMinimal.h"
#include "EZoneDeckAppearances.generated.h"

UENUM(BlueprintType)
enum class EZoneDeckAppearances : uint8 {
    Required,
    Single,
    Multiple,
};

