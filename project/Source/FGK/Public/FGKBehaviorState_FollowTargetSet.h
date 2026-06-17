#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_FollowTargetSet.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_FollowTargetSet : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> FollowTargetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleMontage;
    
public:
    UFGKBehaviorState_FollowTargetSet();

};

