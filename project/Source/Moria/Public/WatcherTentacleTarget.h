#pragma once
#include "CoreMinimal.h"
#include "EWatcherAttackType.h"
#include "EWatcherZone.h"
#include "WatcherTentacleTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWatcherTentacleTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherZone SourceZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    MORIA_API FWatcherTentacleTarget();
};

