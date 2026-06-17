#pragma once
#include "CoreMinimal.h"
#include "MorDwarfCombatMusicTracking.generated.h"

class AMorCharacter;

USTRUCT(BlueprintType)
struct MORIA_API FMorDwarfCombatMusicTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* Dwarf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> Attackers;
    
    FMorDwarfCombatMusicTracking();
};

