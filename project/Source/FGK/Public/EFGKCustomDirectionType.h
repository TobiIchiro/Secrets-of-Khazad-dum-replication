#pragma once
#include "CoreMinimal.h"
#include "EFGKCustomDirectionType.generated.h"

UENUM(BlueprintType)
enum class EFGKCustomDirectionType : uint8 {
    Forward,
    Left,
    Right,
    Back,
};

