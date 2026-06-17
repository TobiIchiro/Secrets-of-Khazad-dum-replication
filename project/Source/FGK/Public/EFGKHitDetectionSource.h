#pragma once
#include "CoreMinimal.h"
#include "EFGKHitDetectionSource.generated.h"

UENUM(BlueprintType)
enum class EFGKHitDetectionSource : uint8 {
    MainWeapon,
    OffhandWeapon,
    Bone,
    AlwaysHitsTarget,
    Bones,
};

