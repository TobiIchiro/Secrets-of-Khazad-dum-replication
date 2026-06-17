#pragma once
#include "CoreMinimal.h"
#include "MorAISiegeTriggeringSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct MORIA_API FMorAISiegeTriggeringSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenSiegeRolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NumberOfFailedSiegeRollsToSiegeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToTriggerSiegeOnFastTravel;
    
    FMorAISiegeTriggeringSettings();
};

