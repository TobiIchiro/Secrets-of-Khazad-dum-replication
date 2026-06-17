#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorCharacterGridWeightRowHandle.h"
#include "MorAIPopulationDefinition.generated.h"

class AMorCharacter;

USTRUCT(BlueprintType)
struct MORIA_API FMorAIPopulationDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCharacterGridWeightRowHandle GridWeightRow;
    
    FMorAIPopulationDefinition();
};

