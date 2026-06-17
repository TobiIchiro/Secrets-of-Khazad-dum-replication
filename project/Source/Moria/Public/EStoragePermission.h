#pragma once
#include "CoreMinimal.h"
#include "EStoragePermission.generated.h"

UENUM(BlueprintType)
enum class EStoragePermission : uint8 {
    NoStorage,
    AllStorage,
};

