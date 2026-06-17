#pragma once
#include "CoreMinimal.h"
#include "EConstructionPermission.generated.h"

UENUM(BlueprintType)
enum class EConstructionPermission : uint8 {
    NoConstruction,
    QuickBuild,
    AllConstruction,
};

