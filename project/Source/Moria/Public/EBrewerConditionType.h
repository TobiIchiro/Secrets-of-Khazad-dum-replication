#pragma once
#include "CoreMinimal.h"
#include "EBrewerConditionType.generated.h"

UENUM(BlueprintType)
enum class EBrewerConditionType : uint8 {
    None,
    EmptyKeg,
    EmptyTank,
    TankIsCrafting,
    HasTransportingBrew,
};

