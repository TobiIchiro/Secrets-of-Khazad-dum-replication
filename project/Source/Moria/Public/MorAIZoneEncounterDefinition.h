#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorProgressRowCondition.h"
#include "MorProgressRowHandle.h"
#include "MorAIZoneEncounterDefinition.generated.h"

class UMorAIWaveEncounterSettings;

USTRUCT(BlueprintType)
struct MORIA_API FMorAIZoneEncounterDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasHordes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle OrcTownProgressRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorProgressRowCondition> ProgressRowConditionsToOverrideHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* HordeOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* HordeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* HarassmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* SiegeSettings;
    
    FMorAIZoneEncounterDefinition();
};

