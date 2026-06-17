#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EWatcherAttackType.h"
#include "AnimNotify_WatcherAttackHit.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UAnimNotify_WatcherAttackHit : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherAttackType AttackType;
    
public:
    UAnimNotify_WatcherAttackHit();

};

