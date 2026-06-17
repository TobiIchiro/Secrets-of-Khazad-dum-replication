#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorAISpawnContext.h"
#include "MorAIAdditionalSpawnParameters.h"
#include "MorAICharacterZoneRosterEntry.h"
#include "MorAIQueuedSpawn.h"
#include "MorAIDespawn.generated.h"

class AMorAISquad;
class AMorCharacter;
class UObject;

USTRUCT(BlueprintType)
struct MORIA_API FMorAIDespawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorCharacter* CharacterToDespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAISpawnContext SpawnContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RespawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> CharacterClassToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIAdditionalSpawnParameters AdditionalSpawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAICharacterZoneRosterEntry ZoneRosterEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorAISquad* AffiliatedSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIQueuedSpawn ShelvedSpawn;
    
    FMorAIDespawn();
};

