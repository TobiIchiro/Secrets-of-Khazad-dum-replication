#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorAIPatrolTimeOfDay.h"
#include "EMorGameModeFlags.h"
#include "MorProgressRowCondition.h"
#include "MorAISiegeProgressionDefinition.generated.h"

class UMorAIWaveEncounterSettings;

USTRUCT(BlueprintType)
struct MORIA_API FMorAISiegeProgressionDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* SiegeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAIPatrolTimeOfDay TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorProgressRowCondition> ProgressRowConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorGameModeFlags AcceptableGameModes;
    
    FMorAISiegeProgressionDefinition();
};

