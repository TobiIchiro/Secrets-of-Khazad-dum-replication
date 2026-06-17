#pragma once
#include "CoreMinimal.h"
#include "EFGKTestInput.generated.h"

UENUM(BlueprintType)
namespace EFGKTestInput {
    enum Type {
        None,
        Jump,
        MoveForward = 254,
        MoveRight,
    };
}

