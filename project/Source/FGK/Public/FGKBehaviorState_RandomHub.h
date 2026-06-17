#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_RandomHub.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_RandomHub : public UFGKBehaviorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockTimerMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockTimerMax;
    
    UFGKBehaviorState_RandomHub();

};

