#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_WatcherShockWaveAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UAnimNotify_WatcherShockWaveAttack : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShockWaveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyDeltaRadius;
    
public:
    UAnimNotify_WatcherShockWaveAttack();

};

