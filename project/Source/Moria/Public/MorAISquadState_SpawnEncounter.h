#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "EMorAIEncounterType.h"
#include "MorAISquadState_SpawnEncounter.generated.h"

class UDataTable;
class UMorAIWaveEncounterSettings;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISquadState_SpawnEncounter : public UFGKAISquadState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* FallbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAIEncounterType EncounterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TableToPlayVoicelineFrom;
    
public:
    UMorAISquadState_SpawnEncounter();

};

