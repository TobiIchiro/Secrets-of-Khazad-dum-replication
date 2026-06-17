#pragma once
#include "CoreMinimal.h"
#include "MorAITimedPatrolChanceData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct MORIA_API FMorAITimedPatrolChanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeSinceLastPatrolToPatrolSpawnChanceCurve;
    
    FMorAITimedPatrolChanceData();
};

