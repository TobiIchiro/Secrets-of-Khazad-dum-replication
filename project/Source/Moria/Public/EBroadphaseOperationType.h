#pragma once
#include "CoreMinimal.h"
#include "EBroadphaseOperationType.generated.h"

UENUM()
enum class EBroadphaseOperationType : int32 {
    Unknown,
    AddBroadphaseRegions,
    ClearBroadphaseRegions,
};

