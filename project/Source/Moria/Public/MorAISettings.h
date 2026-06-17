#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "FGKAISettings.h"
#include "EMAIEmoteType.h"
#include "EMAIGait.h"
#include "EMorAISpawnType.h"
#include "EMorSiegeRole.h"
#include "MAIEmoteContainer.h"
#include "Templates/SubclassOf.h"
#include "MorAISettings.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class MORIA_API UMorAISettings : public UFGKAISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ApproachPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAttackThroughCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSiegeRole SiegeRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakableSearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorAISpawnType, FMAIEmoteContainer> TypedSpawnAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMAIGait, EFGKGait> GaitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> ObstacleQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMAIEmoteType, FMAIEmoteContainer> Emotes;
    
    UMorAISettings();

};

