#pragma once
#include "CoreMinimal.h"
#include "EAnimChooserBoolean.generated.h"

UENUM(BlueprintType)
enum class EAnimChooserBoolean : uint8 {
    Equals,
    NotEqual,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
};

