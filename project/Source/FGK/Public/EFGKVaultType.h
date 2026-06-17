#pragma once
#include "CoreMinimal.h"
#include "EFGKVaultType.generated.h"

UENUM(BlueprintType)
enum class EFGKVaultType : uint8 {
    Default,
    FoldFlip,
    JumpWheel,
    Monkey,
    Thief,
    Dash,
    FlipAndRoll,
    Gate,
    HandSpringToRoll,
    Circle,
    Railflip,
    Reverse,
    Rocket,
    Roll,
    SideSpin,
    Spinning,
    Split,
    StraightLegsFlip,
    Vertex,
    LongCircle,
    HandFree,
    INVALID_VAULT_TYPE = 100,
};

