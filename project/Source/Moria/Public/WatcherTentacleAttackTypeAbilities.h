#pragma once
#include "CoreMinimal.h"
#include "EWatcherAttackType.h"
#include "Templates/SubclassOf.h"
#include "WatcherTentacleAttackTypeAbilities.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FWatcherTentacleAttackTypeAbilities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWatcherAttackType, TSubclassOf<UGameplayAbility>> Abilities;
    
    MORIA_API FWatcherTentacleAttackTypeAbilities();
};

