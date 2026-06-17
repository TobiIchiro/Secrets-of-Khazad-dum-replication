#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "MorGameplayAbility_Summon.generated.h"

class UMorAIWaveEncounterSettings;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_Summon : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DontSummonIfMoreThanThisNumberAliveStill;
    
public:
    UMorGameplayAbility_Summon();

};

