#pragma once
#include "CoreMinimal.h"
#include "MorAICharacterZoneRosterEntry.h"
#include "MorAICharacterZoneRoster.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAICharacterZoneRoster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAICharacterZoneRosterEntry> Roster;
    
    FMorAICharacterZoneRoster();
};

