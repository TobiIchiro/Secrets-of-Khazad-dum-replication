#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorAchievementTriggerBehavior.h"
#include "EMorAchievementType.h"
#include "MorAnyItemRowHandle.h"
#include "MorZoneRowHandle.h"
#include "MorAchievementDefinition.generated.h"

class AMorCharacter;

USTRUCT(BlueprintType)
struct MORIA_API FMorAchievementDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAchievementType AchievementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAchievementTriggerBehavior AchievementTriggerBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle ZoneToEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAnyItemRowHandle> ItemSet;
    
    FMorAchievementDefinition();
};

