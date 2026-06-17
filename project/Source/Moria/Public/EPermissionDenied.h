#pragma once
#include "CoreMinimal.h"
#include "EPermissionDenied.generated.h"

UENUM(BlueprintType)
enum class EPermissionDenied : uint8 {
    Build,
    QuickBuild,
    BaseStorage,
    Deconstruct,
};

