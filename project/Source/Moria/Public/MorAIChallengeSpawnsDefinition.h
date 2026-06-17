#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAIChallengeSpawnsDefinition.generated.h"

class AMorCharacter;

USTRUCT(BlueprintType)
struct MORIA_API FMorAIChallengeSpawnsDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorCharacter>, uint32> CharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSpawnsBeAwareOfEachother;
    
    FMorAIChallengeSpawnsDefinition();
};

