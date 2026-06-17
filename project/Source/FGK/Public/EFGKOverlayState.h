#pragma once
#include "CoreMinimal.h"
#include "EFGKOverlayState.generated.h"

UENUM(BlueprintType)
enum class EFGKOverlayState : uint8 {
    Default,
    Masculine,
    Feminine,
    Injured,
    HandsTied,
    Rifle,
    PistolOneHanded,
    PistolTwoHanded,
    Bow,
    Torch,
    Binoculars,
    Box,
    Barrel,
    Shield,
    MeleeTwoHanded,
};

