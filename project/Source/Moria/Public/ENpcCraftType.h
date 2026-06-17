#pragma once
#include "CoreMinimal.h"
#include "ENpcCraftType.generated.h"

UENUM(BlueprintType)
enum class ENpcCraftType : uint8 {
    Cooking,
    Metalworking,
    Brewing,
    Blacksmith,
    Artisan,
    Tailor,
};

