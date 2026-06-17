#pragma once
#include "CoreMinimal.h"
#include "EMorSurveyState.generated.h"

UENUM(BlueprintType)
enum class EMorSurveyState : uint8 {
    Off,
    Nag,
    Overdue,
    ReallyOverdue,
};

