#pragma once
#include "CoreMinimal.h"
#include "EBuildMode.generated.h"

UENUM(BlueprintType)
enum class EBuildMode : uint8 {
    None,
    Construct,
    QuickConstruct,
    Deconstruct,
};

