#pragma once
#include "CoreMinimal.h"
#include "EMorPlayerReportCategory.generated.h"

UENUM(BlueprintType)
enum class EMorPlayerReportCategory : uint8 {
    Invalid,
    Cheating,
    Exploiting,
    OffensiveProfile,
    VerbalAbuse,
    Scamming,
    Spamming,
    Other,
};

