#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGKCombatStat.generated.h"

class AFGKBaseCharacter;

USTRUCT(BlueprintType)
struct FFGKCombatStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKBaseCharacter> VictimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFinalKills;
    
    FGK_API FFGKCombatStat();
};

