#pragma once
#include "CoreMinimal.h"
#include "ESaveMigrationState.generated.h"

UENUM(BlueprintType)
enum class ESaveMigrationState : uint8 {
    Uninitialized,
    Active,
    Refresh,
    Complete,
};

