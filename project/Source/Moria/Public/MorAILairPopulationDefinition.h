#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorChallengeRowHandle.h"
#include "MorAILairPopulationDefinition.generated.h"

class AMorCharacter;
class UMorAIWaveEncounterSettings;

USTRUCT(BlueprintType)
struct MORIA_API FMorAILairPopulationDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorChallengeRowHandle ChallengeHandle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorCharacter>, uint32> CharactersOnLookout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorCharacter>, uint32> CharactersGuardingBase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorCharacter>, uint32> CharactersIdleInteracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnLargeNav;
    
    FMorAILairPopulationDefinition();
};

