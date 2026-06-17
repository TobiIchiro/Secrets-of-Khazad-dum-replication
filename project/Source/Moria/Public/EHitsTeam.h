#pragma once
#include "CoreMinimal.h"
#include "EHitsTeam.generated.h"

UENUM(BlueprintType)
enum class EHitsTeam : uint8 {
    Both,
    Enemy,
    Friend,
};

